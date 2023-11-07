#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check_array(int *a,int n)
{
    int x=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]<1 || a[i]>n){
            x++;
        }

    }
    if(x>0){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    bool ans=check_array(ar,n);
    if(ans){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}

