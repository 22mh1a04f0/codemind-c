#include<stdio.h>
int main()
{
    int n,hr,min;
    scanf("%d",&n);
    hr=n/60;
    min=n%60;
    printf("%d",hr);
    printf(" Hour(s) ");
    printf("%d",min);
    printf(" Minute(s)");
}