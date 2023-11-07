#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    int small_fact=factorial(n-1);
    int total=small_fact*n;
}
int main()
{
    int fact=factorial(5);
    printf("%d\n",fact);

    return 0;
}
