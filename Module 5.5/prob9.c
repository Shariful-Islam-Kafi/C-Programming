#include<stdio.h>
int main()
{
    int sum = 0;
    for (int i=100;i>0;i-=3){
            sum+=i;
        printf("i = %d\t\tsum = %d\n",i,sum);
    }
    printf("Final sum = %d\n",sum);

    return 0;
}
