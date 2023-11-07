#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int get_max(int a,int b)
{
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=get_max(a,b);
    printf("%d\n",s);


    return 0;
}

