#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void odd_even(int n)
{
    if(n%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    odd_even(n);

    return 0;
}


