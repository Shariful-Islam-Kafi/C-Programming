
#include<stdio.h>
int main()
{
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);

    if (x>s && x<t){
        printf("Yes\n");
    }
    else if (x<s && x>t){
        printf("No\n");
    }
    else if (x>=s && x>=t){
        printf("Yes\n");
    }


    return 0;
}




