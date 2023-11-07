#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cur = 0;
    for (int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if (x>0){
            cur++;
            break;
        }
    }
    if (cur==0){
        printf("EASY\n");
    }
    else {
        printf("HARD\n");
    }


    return 0;
}





