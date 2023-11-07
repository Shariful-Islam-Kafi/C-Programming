#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int great = a>b ? a : b;
   printf("%d\n",great);

    return 0;
}

