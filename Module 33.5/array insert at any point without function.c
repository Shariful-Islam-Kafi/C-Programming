#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int pos,val;
    scanf("%d %d",&pos,&val);
    for(int i=n-2;i>=pos;i--){
        ar[i+1]=ar[i];
    }
    ar[pos]=val;
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}

