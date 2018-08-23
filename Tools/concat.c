#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concat(const char *str1, const char *str2)
{
	char * result;
	result = malloc(sizeof(str1) + sizeof(str2) + 1);
	if(result == NULL)
	{
		printf("Error: malloc failed in concat.\n");
		exit(EXIT_FAILURE);
	}
	strcpy(result, str1);
	strcat(result, str2);
	return result;
}
