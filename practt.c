#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int dhap=1,space=n+(n-1);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=dhap;j++){
            printf("%d",dhap);
        }
        dhap+=2;
        space--;
        printf("\n");
    }


    return 0;
}
