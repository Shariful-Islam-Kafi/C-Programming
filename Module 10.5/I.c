#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cur=0;
    for (int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        cur+=x;
    }
    double res = (double)cur/n;

    printf("%.12f\n",res);

    return 0;
}



