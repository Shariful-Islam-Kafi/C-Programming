#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if(x==1){
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");


    return 0;
}










