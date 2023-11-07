#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int a=10;
    printf("value-> %d\tadress-> %p\n",a,&a);
    int *p=&a;
    printf("adress -> %p \tadress -> %p\tvalue -> %d",&p,p,*p);
    return 0;
}

