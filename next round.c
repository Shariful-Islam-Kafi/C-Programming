#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int ar[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for (int i=0;i<n;i++){
        if(ar[i]>k){
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}


