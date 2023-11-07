#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        if (t%2==0){
            sum+=t;
        }

    }
    printf("%d\n",sum);



    return 0;
}

