#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int coin = 0;
    for (int i=1;i<=2;i++){
        if (a>=b){
            coin+=a;
            a--;
        }
        else{
            coin+=b;
            b--;
        }
    }
    printf("%d\n",coin);


    return 0;
}



