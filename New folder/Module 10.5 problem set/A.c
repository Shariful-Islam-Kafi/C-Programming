#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int curtains = 2*b;
    if (a>curtains){
        printf("%d\n",a-curtains);

    }
    else {
        printf("0\n");
    }


    return 0;
}
