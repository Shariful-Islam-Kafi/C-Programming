#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n=100;
    int *p=&n;
    int **q=&p;
    int ***r=&q;
    ***r=-5000;
    printf("%d\n",n);

    return 0;
}

