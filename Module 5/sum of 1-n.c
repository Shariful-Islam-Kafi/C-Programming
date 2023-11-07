#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum+=i;
        printf("i = %d\tsum = %d\n",i,sum);
    }
    printf("Final sum = %d\n",sum);



    return 0;
}

