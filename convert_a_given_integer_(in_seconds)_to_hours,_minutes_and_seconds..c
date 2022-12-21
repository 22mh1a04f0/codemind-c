#include<stdio.h>
int main()
{
    int n,hr,min,sec;
    scanf("%d",&n);
    hr=n/3600;
    n=n%3600;
    min=n/60;
    sec=n%60;
    printf("H:M:S-");
    printf("%d",hr);
    printf(":%d",min);
    printf(":%d",sec);
}