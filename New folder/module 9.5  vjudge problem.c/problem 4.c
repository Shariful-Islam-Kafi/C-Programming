#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int total_price = 0;
    for (int i=1;i<=w;i++){
        total_price+=k*i;
    }
    int money_borrow = total_price-n;
    if (total_price>n){
        printf("%d\n",money_borrow);
    }
    else {
        printf("0\n");
    }
    return 0;
}




