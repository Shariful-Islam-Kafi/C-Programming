#include<stdio.h>
int main()
{
    int t,n,count=0;
    scanf("%d %d",&t,&n);
    for (int i=1;i<=t;i++){
        int x;
        scanf("%d",&x);
        if (x<n){
            count++;
        }

    }
    printf("%d\n",count);


    return 0;
}





