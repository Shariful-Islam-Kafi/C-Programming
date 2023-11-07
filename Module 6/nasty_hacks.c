#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
        int normal_profit;
        int adv_profit;
        int adv_cost;
        scanf("%d %d %d",&normal_profit,&adv_profit,&adv_cost);
        int AdvertiseProfit = adv_profit - adv_cost;

        if (AdvertiseProfit>normal_profit){
            printf("advertise\n");
        }
        else if (AdvertiseProfit==normal_profit){
            printf("does not matter\n");
        }
        else {
            printf("do not advertise\n");
        }
    }



    return 0;
}

