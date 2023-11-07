#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int mul;
    scanf("%d",&mul);
    int counter[101]={0};
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        counter[val]=1;
    }
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        int baki;
        if(mul>=val && mul%val==0)
        {
            baki=mul/val;
            if(baki==val)
            {
            continue;
            }
            if(counter[baki]==1)
            {
                printf("YES\n");
                return 0;
            }

        }



    }
    printf("NO\n");


   return 0;
}



