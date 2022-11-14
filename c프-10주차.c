#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int arr1[6]={1,2,3,4,5,6};
    int*ptr1=&arr1[0];
    int arr2[6]={7,8,9,10,11,12};
    int*ptr2=&arr2[0];
    int i,temp;

    printf("arr1: %d %d %d %d %d %d\n", *ptr1,*(ptr1+1),*(ptr1+2),(*ptr1+3),*(ptr1+4),*(ptr1+5));
    printf("arr2: %d %d %d %d %d %d\n", *ptr2,*(ptr2+1),*(ptr2+2),(*ptr2+3),*(ptr2+4),*(ptr2+5));
    printf("\n");
    printf("after swap\n");
    for(i=0;i<6;i++)
    {
        temp=*(ptr1+i);
        *(ptr1+i) = *(ptr2+i);
        *(ptr2+i)=temp;
    }
    printf("arr1: %d %d %d %d %d %d\n", *ptr1,*(ptr1+1),*(ptr1+2),(*ptr1+3),*(ptr1+4),*(ptr1+5));
    printf("arr2: %d %d %d %d %d %d\n", *ptr2,*(ptr2+1),*(ptr2+2),(*ptr2+3),*(ptr2+4),*(ptr2+5));
    return 0;
}