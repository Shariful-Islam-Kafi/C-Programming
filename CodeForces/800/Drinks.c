#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    double ans=(double)sum/(double)n;
    printf("%.12lf\n",ans);

    return 0;
}

