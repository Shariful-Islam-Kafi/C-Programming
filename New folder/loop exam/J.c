#include<stdio.h>
#include<limits.h>

int main()
{
    int x;
    int a;
    int b;
    int c;

    scanf("%d",&x);
    while(x>0){
    int digit= x%10;
    a=digit;
    x/=10;
    digit =x%10;
    b=digit;
    x/=10;
    digit =x%10;
    c=digit;
    x/=10;
     printf("%d%d%d\n",a,b,c);

    }



       return 0;
}


