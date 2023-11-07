#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void ultra_sum(int a,int b,int *sum,int *mul)
{
    *sum=a+b;
    *mul=a*b;
}
int main()
{
    int a,b,summation,multiplication;
    scanf("%d %d",&a,&b);
    ultra_sum(a,b,&summation,&multiplication);
    printf("%d %d\n",summation,multiplication);


    return 0;
}

