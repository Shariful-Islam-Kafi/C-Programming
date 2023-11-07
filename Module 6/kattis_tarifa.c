#include<stdio.h>
int main()
{
    int limit,month;
    scanf("%d",&limit);
    scanf("%d",&month);
    int baki = 0;
    for (int i=1;i<=month;i++){
        int used;
        scanf("%d",&used);
        int month_limit = limit+baki;
        baki = month_limit-used;
    }
    int final_limit = limit+baki;
    printf("%d\n",final_limit);



    return 0;
}
