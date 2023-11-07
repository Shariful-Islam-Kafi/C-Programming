#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}

int main()
{
    odd_even();

    return 0;
}


