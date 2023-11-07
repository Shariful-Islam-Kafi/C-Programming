#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,dhap=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=dhap;j++){
            printf("*");

        }
        printf("\n");
        dhap++;
    }
    return 0;
}




