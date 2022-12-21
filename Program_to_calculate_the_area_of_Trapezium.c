#include<stdio.h>
int main()
{
    float a,b,h,area;
    scanf("%f%f",&a,&b);
    scanf("%f",&h);
    area=((a+b)/2*h);
    printf("%2.4f",area);
}