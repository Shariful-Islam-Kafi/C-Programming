#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a,b,c;
        scanf(" %c%c%c",&a,&b,&c);
        if(b=='+'){
            sum++;
        }
        if(b=='-'){
            sum--;
        }


    }
    printf("%d\n",sum);

    return 0;
}

