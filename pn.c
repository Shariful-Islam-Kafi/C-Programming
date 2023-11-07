#include<stdio.h>
int main()
{
    int sum=0, i,j,n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}

