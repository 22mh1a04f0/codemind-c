#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    scanf("%d",&p);
    float rate,ci,amt;
    scanf("%f",&rate);
    int yrs;
    scanf("%d",&yrs);
    amt=p*pow((1+rate/100.0),yrs);
    ci=amt-p;
    printf("%.2f
",ci);
   
}