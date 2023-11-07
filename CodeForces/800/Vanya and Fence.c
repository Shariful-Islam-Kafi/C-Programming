#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,h,count=0;
    scanf("%d %d",&n,&h);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if(x<=h){
            count++;
        }
        if(x>h){
            count+=2;
        }
    }
    printf("%d\n",count);


    return 0;
}









