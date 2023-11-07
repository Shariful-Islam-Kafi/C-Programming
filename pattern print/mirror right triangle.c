#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
   int n,dhap=1;
   scanf("%d",&n);
   int space = n-1;
   for (int i=1;i<=n;i++){
     for(int k=1;k<=space;k++){
        printf(" ");
     }
     for (int j=1;j<=dhap;j++){
        printf("*");
     }
     dhap++;
     space--;
     printf("\n");

   }

    return 0;
}




