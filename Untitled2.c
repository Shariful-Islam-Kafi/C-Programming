#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p,q,m=0,c=0;
    for (int i=0;i<n;i++){
        scanf("%d %d",&p,&q);

        if (p>q){
            m++;
        }
        else if (p<q){
            c++;
        }
    }
    if (m>c){
        printf("Mishka\n");
    }
    else if (m<c){
        printf("Chris\n");
    }
    else {
        printf("Friendship is magic!^^\n");
    }

    return 0;
}

