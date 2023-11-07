#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d\n",b+c);
    }
    else if (b>a && b>c){
        printf("%d\n",a+c);
    }
    else if (a==b&&b==c){
        printf("%d\n",a+b);



    }
    else {
        printf("%d\n",a+b);
    }



    return 0;
}
