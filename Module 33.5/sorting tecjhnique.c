#include<stdio.h>
void sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++){
        for(int check=pos+1;check<n;check++){
            if(a[check]<a[pos]){
                int tmp=a[check];
                a[check]=a[pos];
                a[pos]=tmp;
            }
        }
    }
}
int main()
{
    int ar[6]={2,5,10,3,20,14};
    sort(ar,6);
    for(int i=0;i<6;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}

