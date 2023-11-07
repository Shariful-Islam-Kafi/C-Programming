#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int counter[2001]={0};

    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    for (int i=0;i<n;i++){
        int value=ar[i];
        counter[value]++;
    }
    for (int i=0;i<=2000;i++){
        if(counter[i]==0){
            printf("%d\n",i);
            break;
        }
    }


    return 0;
}



