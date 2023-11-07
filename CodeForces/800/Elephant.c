#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,step=0,x;
    scanf("%d",&n);
    while(n>0){
        if(n>=5){
            x=n/5;
            n-=5*x;
            step+=x;
        }
        if(n>=4){
            x=n/4;
            n-=4*x;
            step+=x;
        }
        if(n>=3){
            x=n/3;
            n-=3*x;
            step+=x;
        }
        if(n>=2){
            x=n/2;
            n-=2*x;
            step+=x;
        }
        if(n>=1){
            x=n/1;
            n-=1*x;
            step+=x;
        }

    }
    printf("%d\n",step);


    return 0;
}



