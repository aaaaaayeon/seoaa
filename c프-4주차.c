#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int i,j,k;
    for(i=0; i<5; i++)
	{
        
		for(k=4-i; k>0; k--)
		{
			printf(" ");
		}

        for(j=0; j<i*2+1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}
    


