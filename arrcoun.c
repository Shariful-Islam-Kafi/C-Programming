#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    int counter[100]={0};
    for(int i=0;i<n;i++){
        printf("Enter num[%d]: ",i);
        scanf("%d",&ar[i]);
        counter[ar[i]]++;
    }

    for(int val=0;val<=99;val++){
        if(counter[val]>0){
            printf("Value-> %d\t\tCount=->%d\n",val,counter[val]);
        }
    }


    return 0;

}


