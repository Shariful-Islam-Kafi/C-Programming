#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int max=ar[0],min=ar[0];
    for(int i=0;i<n;i++){

        if(ar[i]>max){
            max=ar[i];
        }
        if(ar[i]<min){
            min=ar[i];
        }

    }
     printf("Max=%d\tMin=%d\n",max,min);

    return 0;
}

