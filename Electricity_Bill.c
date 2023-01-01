#include<stdio.h>
int main()
{
    int unit;
    scanf("%d",&unit);
    float cost,b,s,ba;
    if(unit<=199)
    {
        cost=1.20;
    }
    else if(unit>=200 && unit<400)
    {
        cost=1.40;
    }
    else if(unit>=400 && unit<600)
    {
        cost=1.60;
    }
    else if(unit>=600 && unit<800)
    {
        cost=1.80;
    }
    else if(unit>=800)
    {
        cost=2.00;
    }
    b=unit*cost;
    if(b>400)
    {
        s=0.15*b;
    }
    ba=b+s;
    printf("Units Consumed: %d
",unit);
    printf("Cost per Unit: %0.2f
",cost);
    printf("Bill: %0.2f
",b);
    printf("Surcharge: %0.2f
",s);
    printf("Total Amount: %0.2f",ba);
}
