#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//¶ÏÑÔ
	assert(src != NULL);//¶ÏÑÔ
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//strcpy
	//×Ö·û´®¿½±´

	char arr1[] = "##############";
	char arr2[] = "bit";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}