#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,a,b,count=-1;
    scanf("%d",&n);
    int counter[20001]={0};
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        for(int j=0;j<a;j++){
            scanf("%d",&b);
            counter[b]++;
        for (int val=1;val<=9;val++){
            if(counter[val]>=3){
                count=val;;
            }
        }

//            else {
//                count=-1;
//            }
        }
        printf("%d\n",count);

    }


    return 0;
}

