#include<stdio.h>
#include<string.h>
#include<stdbool.h>
float make_sum(float a,float b)
{
    return a+b;
}
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float res=make_sum(a,b);
    printf("%f\n",res);

    return 0;
}
