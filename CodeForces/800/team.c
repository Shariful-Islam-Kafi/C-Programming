#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int p,v,t;
        scanf("%d %d %d",&p,&v,&t);
        int sum=p+v+t;
        if(sum>=2){
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}


