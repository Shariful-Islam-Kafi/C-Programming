#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    for (int i=0;i<n;i++){
        int val=ar[i];
        sum+=val;

    }
    printf("%d\n",sum);






    return 0;
}
