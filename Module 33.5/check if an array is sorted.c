#include<stdio.h>
#include<stdbool.h>
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
void array_copy(int *a,int*b,int n)
{
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}
bool is_sorted(int *a,int n)
{
    int b[n];
    array_copy(a,b,n);
    sort(b,n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int ar[6]={2,3,5,10,14,20};
    bool ans=is_sorted(ar,6);
    if(ans){
        printf("YES,sorted\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

