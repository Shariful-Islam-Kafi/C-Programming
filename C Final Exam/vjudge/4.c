#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(ar[i]<0)
        {
            ar[i]*=-1;
            sum+=ar[i];
        }
    }

    printf("%d\n",sum);


    return 0;
}
