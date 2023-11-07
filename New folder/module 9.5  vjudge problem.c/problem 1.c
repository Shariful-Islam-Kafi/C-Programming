#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i_can_follow_most = 2*a+100;
    int extra_user = i_can_follow_most - b;
    printf("%d\n",extra_user);


    return 0;
}

