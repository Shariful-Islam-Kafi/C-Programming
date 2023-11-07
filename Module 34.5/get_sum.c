#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int get_sum(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int ar[7]={1,5,3,7,98,2,9};
    int s=get_sum(ar,7);
    printf("%d\n",s);

    return 0;
}

