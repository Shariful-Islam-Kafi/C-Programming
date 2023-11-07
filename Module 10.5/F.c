#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b,cur=0,x=32;
    scanf("%d %d",&a,&b);
    if (a>b){
        for (int i=b;i<a;i++){
            cur++;
        }
        x = pow(x,cur);
        printf("%d\n",x);
    }
    else if (a==b){
        printf("1\n");
    }


    return 0;
}
