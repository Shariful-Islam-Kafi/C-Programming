#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int sum=0;
    for(int i=1;i<=w;i++){
        sum+=k*i;
    }
    if(sum>=n){
        printf("%d\n",sum-n);
    }
    else{
        printf("0\n");
    }


    return 0;
}


