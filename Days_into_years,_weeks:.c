#include<stdio.h>
int main()
{
    int n,y,w,t;
    scanf("%d",&n);
    t=n%3==0;
    y=n/365;
    w=(n%365)/7;
    printf("%d",y);
    printf("
%d",w);
    
}