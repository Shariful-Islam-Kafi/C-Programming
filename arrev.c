#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        printf("Enter num[%d]: ",i);
        scanf("%d",&ar[i]);
    }

    for(int i=n;i>0;i--){
        printf("%d ",i);


    }


    return 0;
}



