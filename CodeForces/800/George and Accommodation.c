#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(b-a>=2){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}











