#include<stdio.h>
int main()
{
    int n,dhap=1;
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;i++){
        for (int j=1;j<=dhap;j++){
            printf("*");
        }
        if (i<n){
            dhap++;
        }
        else {
            dhap--;
        }
        printf("\n");
    }

    return 0;
}




