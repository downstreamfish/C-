  1 #include <stdio.h>
  2 
  3 char* toString(int iVal)
  4 {
  5     /* 优化点:
  6      *  1,不通过堆栈的方式,无需进出栈,或者是对字符串进行逆序,直接通过指针运算,内存拷贝方式或者最终结果
  7      */ 
  8     char str[1024] = {'\0',};
  9     char *pos = NULL;
 10     int sign = 0;   //正数 或者是 0
 11 
 12     int abs = iVal;
 13 
 14     pos = str + 1023; //移动指针,指向堆栈底部
 15     *pos-- = '\0';  //end
 16 
 17     if(iVal < 0)
 18     {
 19         sign = 1;
 20         abs = -abs;
 21     }
 22     
 23     int dit = 0;
 24     while(abs > 0)
 25     {
 26         dit = abs % 10;
 27         abs = abs / 10;
 28 
 29         *pos-- = (char)('0' + dit); 
 30     }
 31 
 32     if(sign)
 33         *pos-- = '-';
 34 
 35     char *ret = (char*)malloc(1024 - (pos - str));
 36 
 37     if(iVal == 0)               //0的一个处理
 38         strcpy(ret, "0");
 39     else                        //iVal非0的拷贝
 40         strcpy(ret, pos+1);
 41 
 42     return(ret);    
 43 }
 44 
 45 int main(int argc, char* argv[])
 46 {
 47     char* ret = NULL;
 48 
 49     int iVal = atol(argv[1]);
 50 //  int iVal = 123456;
 51     printf("ival = %s\n", toString(iVal));
 52 
 53     return(0);
 54 } 