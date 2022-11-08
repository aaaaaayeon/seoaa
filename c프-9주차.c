#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void odd(int* ptr) 
{
	int i;
	printf("Odd numvers:");
	for (i = 0; i < 5; ++i) 
    {
		if (ptr[i] % 2 != 0)
			printf(" %d,", ptr[i]);
	}
	printf("\b \n");
	
}

void even(int* ptr) 
{
	int i;
	printf("Even numbers:");
	for (i = 0; i < 5; ++i) 
    {
		if (ptr[i] % 2 == 0)
			printf(" %d,", ptr[i]);
	}
	printf("\b \n");
	
}

int main() 
{
    int i,a[5];
    printf("5개의 정수를 입력하세요:");
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }
    odd(a);
	even(a);
   
    return 0;
}
