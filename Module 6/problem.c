#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int cs=1;cs<=t;cs++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d",cs,a+b);
    }



    return 0;
}
