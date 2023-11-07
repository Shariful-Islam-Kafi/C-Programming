#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int counter[101]={0};

    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        counter[ar[i]]++;
    }
    int t;
    printf("Enter number: ");
    scanf("%d",&t);

    if(counter[t]!=0){
        printf("Found\n");
    }
    else {
        printf("Not Found\n");
    }


    return 0;
}


