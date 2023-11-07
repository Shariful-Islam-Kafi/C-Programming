#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int odd_even()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        return printf("Even\n");
    }
    else{
        return printf("Odd\n");
    }
}

int main()
{

    odd_even();

    return 0;
}


