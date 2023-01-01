#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,se,flag=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
    if(a[i]==se)
    {
        scanf("%d",&i);
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        printf("False");
    }
    else{
        printf("True");
    }
}