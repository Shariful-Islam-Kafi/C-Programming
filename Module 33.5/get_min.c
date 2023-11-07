#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int get_min(int a,int b)
{
    int min;
    if(a>=b){
        min=b;
    }
    else{
        min=a;
    }
    return min;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=get_min(a,b);
    printf("%d\n",s);


    return 0;
}


