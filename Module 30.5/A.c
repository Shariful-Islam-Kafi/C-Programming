#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    int counter[101]={0};
    int p;
    scanf("%d",&p);
    int ar1[p];
    for (int i=0;i<p;i++){
        scanf("%d",&ar1[i]);
        counter[ar1[i]]++;
    }
    int q;
    scanf("%d",&q);
    int ar2[q];
    for (int i=0;i<q;i++){
        scanf("%d",&ar2[i]);
        counter[ar2[i]]++;
    }
    for (int i=1;i<=n;i++){
        if (counter[i]==0){
            printf("Oh, my keyboard!\n");
            cnt++;
            return 0;
        }

    }
    if(cnt==0){
        printf("I become the guy.\n");
    }



    return 0;
}




