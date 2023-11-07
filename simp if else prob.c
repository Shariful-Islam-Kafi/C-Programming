#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int counter[1000]={0};
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    for (int i=0;i<n;i++){
        int value=ar[i];
        counter[value]++;
    }
    for (int i=1;i<=n;i++){
        if(counter[i]==0){
            printf("No\n");
            return 0;

        }


    }
    printf("Yes\n");


    return 0;
}
