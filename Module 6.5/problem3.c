#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%3==0 && n%7!=0){
        printf("Yes\n");
    }
    else if (n%3!=0 && n%7==0){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }


    return 0;
}


