#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int check=0;
    for (int i=a;i<=b;i++){
        if (b%i==0 && i%a==0){
            printf("%d ",i);
            check++;
        }


    }
    if (check==0){
        printf("No such integer.\n");
    }




    return 0;
}





