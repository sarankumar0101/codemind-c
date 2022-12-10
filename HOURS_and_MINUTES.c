#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int h,m;
    h=s%60;
    m=s/60;
    //h=s%60;
    printf("%d Hour(s) %d Minute(s)",m,h);
}