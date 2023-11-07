#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cur=0;
    for (int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        if (t<0){
            cur++;
//            printf("%d\n",cur);
        }
        else{
//            printf("0\n");
        }
//        printf("%d\n",cur);


    }
    printf("%d\n",cur);




    return 0;
}


