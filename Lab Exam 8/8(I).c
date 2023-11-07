#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int odd_even(int n)
{
    int odd,even;
    if(n%2==0){

        return printf("Even\n");
    }
    else{

        return printf("Odd\n");
    }
    return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    odd_even(n);

    return 0;
}

