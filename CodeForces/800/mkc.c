#include<stdio.h>
int sum(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return (n+sum(n-1));
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int x=sum(n);
    printf("Sum of 1 to n = %d\n",x);

    return 0;
}

