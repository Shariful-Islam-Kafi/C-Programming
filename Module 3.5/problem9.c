#include<stdio.h>
int main()
{
    int td,year,month,days;
    printf("Input no. of days: ");
    scanf("%d",&td);
    year = td/365;
    month = (td%365)/30;
    days = (td%365)%30;
    printf("Years = %d\nMonth = %d\nDays = %d\n",year,month,days);


    return 0;
}



