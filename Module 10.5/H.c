#include<stdio.h>
#include<limits.h>
int main()
{
    int n,h;
    int cur=0;
    scanf("%d %d",&n,&h);
    for (int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if (x>h){
            cur+=2;
        }
        else {
            cur++;
        }

    }
    printf("%d\n",cur);


    return 0;
}


