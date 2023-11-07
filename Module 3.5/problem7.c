#include<stdio.h>
int main()
{
    int tc;
    printf("Enter temperature in Celsius = ");
    scanf("%d",&tc);
    float tf = (tc*9/5)+32;
    printf("Temperature in Fahrenheit = %.1f F",tf);

    return 0;
}


