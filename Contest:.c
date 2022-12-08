#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&x,&a,&b);
    if(x<=(1*a)+(2*b))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}