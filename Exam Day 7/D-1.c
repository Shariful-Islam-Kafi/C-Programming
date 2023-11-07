#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int t;
    scanf("%d",&t);


    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int counter[20001]={0};
        for (int j=0;j<n;j++){
            int x=0;
            scanf("%d",&x);


            counter[x]++;

        }
         int result=-1;

        for (int k=0;k<=n;k++){
            if(counter[k]>=3){
                result=k;

            }



//            printf("value-> %d     count->%d\n",k,counter[k]);
        }



        printf("%d\n",result);
    }


    return 0;
}

