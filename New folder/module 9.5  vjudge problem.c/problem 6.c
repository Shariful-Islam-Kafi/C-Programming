#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    for (int i=1;i<=y;i++){
        if (x%10 !=0){
            x--;
        }
        else if (x%10==0){
            x/=10;
        }
    }
    printf("%d\n",x);

    return 0;
}

