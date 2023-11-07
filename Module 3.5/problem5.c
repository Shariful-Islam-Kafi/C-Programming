#include<stdio.h>
int main()
{
    float num,real;
    int intt;
    printf("Enter Number: ");
    scanf("%f",&num);
    intt =num/1;
    real = num - intt;
    printf("Integer part = %d\n",intt);
    printf("Real part = %.3lf\n",real);




    return 0;
}



