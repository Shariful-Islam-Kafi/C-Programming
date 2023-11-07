#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        if(a%10==0){
            a/=10;
        }
        else{
            a--;
        }
    }
    printf("%d\n",a);


    return 0;
}



