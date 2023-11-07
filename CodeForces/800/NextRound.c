#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if(x>k){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}

