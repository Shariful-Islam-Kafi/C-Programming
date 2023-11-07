#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    if (n>=-2147483648 && n<=2147483647){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }


    return 0;
}




