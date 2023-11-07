#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum;
    scanf("%d",&sum);
    int counter[101]={0};
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        counter[val]=1;
    }
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        int baki=sum-val;
        if(baki==val)
        {
            continue;
        }
        if(baki<0)
        {
            continue;
        }
        if(counter[baki]==1)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");


    return 0;
}
