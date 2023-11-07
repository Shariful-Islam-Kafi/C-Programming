#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++){
        int x;
        scanf("%d",&x);
        if (x>=67 && x<=45000){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }



    return 0;
}

