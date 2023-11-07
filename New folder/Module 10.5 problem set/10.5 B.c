#include<stdio.h>
#include<limits.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    int a=-2147483648;
    int b=2147483647;
    if (n >=a && n <= b){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }


    return 0;
}
