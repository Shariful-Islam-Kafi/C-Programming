#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    for (int i=n-1,j=0;i>=0,j<n;i--,j++){

        int res = ar[i]-ar[j];
        if (res<0){
            res=-res;
        }
        printf("%d ",res);

    }


    return 0;
}


