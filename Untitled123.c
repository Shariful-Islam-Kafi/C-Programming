#include<stdio.h>
int main()
{
    int ar[5]={2,3,5,4,1};
    for(int i=0;i<5;i++){
        if(ar[i]>ar[i+1])
        {
            ar[i+1]=ar[i];
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }


    return 0;
}
