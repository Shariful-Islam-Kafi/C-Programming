#include<stdio.h>
#include<limits.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x=32;
    int cur =0;
    if (a>b){
        int s=a-b;
        for (int i=1;i<=s;i++){
            cur++;
        }
        x=pow(x,cur);
        printf("%d\n",x);
    }
    else if (a==b){
        printf("1\n");
    }

    return 0;
}

