#include<stdio.h>
#include<limits.h>

int main()
{
    int a,b;
    int count=0;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        count++;
    }
    printf("%d\n",count);



     return 0;
}

