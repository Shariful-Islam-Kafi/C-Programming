#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,count = 0;
    while(n>0){
        x = n%10;
        if (x==7){
            printf("YES\n");
            count++;
            break;
        }
        n/=10;
    }
    if (count==0){
        printf("NO\n");
    }

    return 0;
}


