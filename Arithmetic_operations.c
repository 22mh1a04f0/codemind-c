#include<stdio.h>
int main()
{
    int a,b,summ,df,pd,qt,rd;
    scanf("%d%d",&a,&b);
    summ=a+b;
    df=a-b;
    pd=a*b;
    qt=a/b;
    rd=a%b;
    printf("Sum:%d",summ);
    printf("
Difference:%d",df);
    printf("
Product:%d",pd);
    printf("
Quotient:%d",qt);
    printf("
Remainder:%d",rd);
}