
#include<stdio.h>
int main()
{
    int n,k,a;
    scanf("%d %d %d",&n,&k,&a);
    for (int i=1;i<k;i++){
        a++;
        if(a>n){
            a=1;
        }
    }
    printf("%d\n",a);



    return 0;
}


