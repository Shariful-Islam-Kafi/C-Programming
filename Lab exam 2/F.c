#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x = b-a;
    if (x>0){
        printf("%d\n",x+1);
    }
    else {
        printf("0\n");
    }


    return 0;
}


