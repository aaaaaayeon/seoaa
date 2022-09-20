#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//연습문제 3장 3번
int main1(void)
{
    int result;
    int num;

    printf("숫자 한 개를 입력하세요:");
    scanf("%d", &num);

    result= num*num;
    
    printf("결과: %d ",result);
    return 0;
}

//연습문제 3장 4번
int main2(void)
{
    int result1;
    int result2;
    int num1,num2;

    printf("숫자 두 개를 입력하세요:");
    scanf("%d %d", &num1, &num2);

    result1=num1/num2;
    result2=num1%num2;
    
    printf("몫: %d ",result1);
    printf("나머지: %d ",result2);
    return 0;
}

//연습문제 3장 5번
int main3(void)
{
    int result;
    int num1,num2,num3;

    printf("숫자 세 개를 입력하세요:");
    scanf("%d %d %d", &num1, &num2,&num3);

    result=(num1-num2) * (num2+num3) * (num3%num1);
    

    printf("결과: %d ",result);
    return 0;
}

//연습문제 4장 1번
int main4(void)
{
    int num;

    printf("숫자 한 개를 입력하세요:");
    scanf(" %d ",  &num);
    
    num=~num+1;
    
    printf("결과: %d ",num);
    return 0;
}

//연습문제 4장 2번
int main5(void)
{
    int a=3;
    
    a=a<<3;
    a=a>>2;

    printf("%d",a);
    return 0;
}

//개념 확인 과제
int main(void)
{
    
    int num1,num2;

    printf("Input two integers:");
    scanf("%d %d", &num1, &num2);

    int result1=num1 & num2;
    int result2=num1 | num2;
    int result3=num1 ^ num2;
    

    printf("결과", result1);
    printf(num1,"|",num2,result2);
    printf(num1,"^",num2,result3);
    return 0;
}
