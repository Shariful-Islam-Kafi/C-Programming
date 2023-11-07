#include<stdio.h>
#include<limits.h>

int main()
{
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);
    if (t>s){
        if(x<s){
            printf("No\n");
        }
        else if (x<t){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else {
        if(x>=s){
            printf("Yes\n");
        }
        else if (x<t){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }


    return 0;
}
