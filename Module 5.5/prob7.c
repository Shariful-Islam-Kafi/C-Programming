#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int big = (a>b ? a:b);
    printf("Big number is %d\n",big);



    return 0;
}

