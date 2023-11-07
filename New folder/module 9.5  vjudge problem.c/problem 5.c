#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int x=A+B;
    int y=A-B;
    int z=A*B;

    if (x>=y && x>=z){
        printf("%d\n",x);
    }
    else if (z>x && z>y){
        printf("%d\n",z);
    }
    else{
        printf("%d\n",y);
    }


    return 0;
}

