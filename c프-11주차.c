#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
    double arr[5]={0};
    int i;
    double total;
    double a;
    double aa;
    double aaa;

    for (i=0;i<5;i++)
    {
        printf("Enter 5 real numbers:");
        scanf("%lf",&arr[i]);
    }

    total=0;
    for (i=0;i<5;i++)
        total+=arr[i];
    a=total/5.0;

    total=0;
    for (i=0;i<5;i++)
        total+=(arr[i]-a)*(arr[i]-a);
    aa=total/5.0;

    aaa=sqrt(aa);

    printf("Standard Deviation = %.3lf\n",aaa);
    return 0;

}