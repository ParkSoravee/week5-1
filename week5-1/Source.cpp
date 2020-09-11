#include<stdio.h>

void printStr(char*);

int main()
{
	char str[1000];
	scanf_s("%s", str,999);

	char* pStr = str;
	printStr(pStr);



	return 0;
}

void printStr(char* pStr)
{

	while (*pStr != '\0')
	{
		if (*pStr >= 'a' and *pStr <= 'z')
		{
			printf("%c", *pStr - 'a' + 'A');
		}
		if (*pStr >= 'A' and *pStr <= 'Z')
		{
			printf("%c", *pStr - 'A' + 'a');
		}
		pStr++;
	}

}