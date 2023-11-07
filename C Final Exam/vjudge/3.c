#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        int ar[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&ar[j]);
        }
        if(x%2==0)
        {
            for(int j=0,k=x-1;j<x/2;j++,k--)
            {
                printf("%d ",ar[j]);
                printf("%d ",ar[k]);
            }
        }
        else
        {

            for(int j=0,k=x-1;j<=x/2;j++,k--)
            {
                if(j==k)
                {
                    printf("%d",ar[j]);
                    break;
                }
                printf("%d ",ar[j]);
                printf("%d ",ar[k]);
            }


        }


        printf("\n");
    }


    return 0;
}
