#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int print_oneToN(int n)
{
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print_oneToN(n);

    return 0;
}


