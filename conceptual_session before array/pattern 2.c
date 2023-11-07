#include<stdio.h>
int main()
{
   int n,dhap=1;
   scanf("%d",&n);
   int space = n/2;
   for (int i=1;i<=n;i++){
    for (int j=1;j<=space;j++){
        printf(" ");

    }
    for (int k=1;k<=dhap;k++){
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



