#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int to_bin(int n);

int main(void) 
{
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	to_bin(number);
	printf("\n");

	return 0;
}
int to_bin(int n) 
{

	if (n == 0 || n == 1) 
		printf("%d", n);
	else {
		to_bin(n / 2); 
		printf("%d", n % 2);
	}
	return 0;
}



