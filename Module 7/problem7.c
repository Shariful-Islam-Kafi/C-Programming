#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (b>=c && c>=a){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }



    return 0;
}
