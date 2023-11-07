#include<stdio.h>
int main()
{
    int principle,time;
    float rate;
    printf("Enter principle: ");
    scanf("%d",&principle);
    printf("Enter time: ");
    scanf("%d",&time);
    printf("Enter rate: ");
    scanf("%f",&rate);

    double SI = (principle*time*rate)/100;
    printf("%lf\n",SI);
    printf("%.1lf\n",SI+principle);



    return 0;
}


