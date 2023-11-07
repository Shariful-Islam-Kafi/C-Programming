#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int dhap=1,space=n/2;
    for (int i=1;i<=n;i++){
        for (int k=1;k<=space;k++){
            printf(" ");
        }
        for (int j=1;j<=dhap;j++){
            printf("*");
        }
        if (i<=n/2){
            dhap+=2;
            space--;
        }
        else {
            dhap-=2;
            space++;
        }

        printf("\n");
    }






    return 0;
}




