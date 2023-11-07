#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=0,cap=0;
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        cap=cap-a+b;
        if(cap>max){
            max=cap;
        }

    }
    printf("%d\n",max);


    return 0;
}





