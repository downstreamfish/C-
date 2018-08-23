#include <io.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 256

long total;

int countLines(const char *filename);
void findAllCodes(const char *path);
void findAllFiles(const char *path);
int countLines(const char *filename)
{
   FILE * fp;
   int count = 0;
   int temp;
   if((fp = fopen(filename,"r"))==NULL){
      fprintf(stderr,"Can not open the file: %s\n", filename);
      return 0;
   }
   while((temp =fgetc(fp))!=EOF){
      if(temp == '\n'){
         count++;
      }
   }
   fclose(fp);
   return count;
}
void findAllCodes(const char *path)
{
   struct _finddata_t fa;
   long handle;
   char thePath[MAX], target[MAX];
   strcpy(thePath,path);
   if((handle = _findfirst(strcat(thePath,"/*.c"),&fa))!=-1L){
      do{
         sprintf(target, "%s%s", path, fa.name);
         total += countLines(target);
      }while(_findnext(handle,&fa) == 0);
   }
   _findclose(handle);
}

void findAllDirs(const char *path){
   struct _finddata_t fa;
   long handle;
   char thePath[MAX];
   strcpy(thePath,path);
   if((handle = _findfirst(strcat(thePath,"/*"),&fa))==-1L){
      fprintf(stderr,"The path %s is wrong!\n",path);
      return;
   }
   do{
      if(!strcmp(fa.name,".")|| !strcmp(fa.name, ".."))
         continue;
      if(fa.attrib == _A_SUBDIR){
         sprintf(thePath, "%s%s", path, fa.name);
         findAllCodes(thePath);
         findAllDirs(thePath);
      }
   }while(_findnext(handle,&fa)==0);
   _findclose(handle);
}

int main()
{
   char path[MAX] = ".";
   printf("counting ....\n");
   findAllCodes(path);
   findAllDirs(path);
   printf("You have already write %ld lines code.\n\n", total);

   return 0;
}












































