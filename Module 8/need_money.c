#include<stdio.h>
int main()
{
    int money=0;
    int target =100;
    while (money<100){
        printf("Need more money. Enter Amount: ");
        int given;
        scanf("%d",&given);
        money+=given;
        printf("Current money = %d\n",money);
    }



    return 0;
}
