#include<stdio.h>
int main()
{
    int sum=0, i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }

        }
        if(sum==i){
            printf("%d ",i);
            sum=0;

        }
        else{
            sum=0;
        }

    }





    return 0;
}
