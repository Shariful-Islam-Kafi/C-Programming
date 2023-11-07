#include<stdio.h>
int fun(int *a,int size)
{
    if(size==0)
        return 0;
    int baki_sum=fun(a+1,size-1);
    int total=baki_sum+a[0];
    return total;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int sum=fun(a,5);
    printf("%d\n",sum);
    return 0;
}
