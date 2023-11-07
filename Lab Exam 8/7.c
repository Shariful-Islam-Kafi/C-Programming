#include<stdio.h>
int count_swap(int *a,int n)
{
    int swp=0;
    for(int pos=0;pos<n-1;pos++){
        for(int check=pos+1;check<n;check++){
            if(a[check]<a[pos]){
                int tmp=a[check];
                a[check]=a[pos];
                a[pos]=tmp;
                swp++;
            }
        }
    }
    return swp;
}
int main()
{
    int ar[6]={1,2,4,3,6,5};
    int x=count_swap(ar,6);
    printf("%d\n",x);
    return 0;
}


