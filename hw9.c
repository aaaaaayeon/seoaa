#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[50];
    printf("Input>");
    gets(str);
    const int diff='a'-'A';
    for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + diff;                       // 대문자->소문자
		}
		else if (str[i] >= 'a' && str[i] <= 'z')         // 소문자->대문자
		{
			str[i] = str[i] - diff;
		}
	}
	printf("Output>%s\n", str);

	return 0;
}
				