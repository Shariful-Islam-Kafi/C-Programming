#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int curt = 2*b;
    if (curt>=a){
        printf("0\n");
    }
    else {
        printf("%d\n",a-curt);
    }

    return 0;
}




