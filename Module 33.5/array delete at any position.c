#include<stdio.h>
void array_delete(int *a,int n,int pos)
{
    for(int i=pos+1;i<n;i++){
        a[i-1]=a[i];
    }
}


int main()
{
    int ar[6]={5,10,2,3,14,20};
    int pos;
    scanf("%d",&pos);
    array_delete(ar,6,pos);
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}
