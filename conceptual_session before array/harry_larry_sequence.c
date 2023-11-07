#include<stdio.h>
int main()
{
    char c;
    int n;
    while(scanf("%c %d",&c,&n)!=EOF){
        getchar();
        int sum = 0;
        if (c=='H'){
            for (int i=1;i<=n;i++){
                if (i%2==0){
                    sum-=i;
                }
                else {
                    sum+=i;
                }
            }
        }
        else {
            for (int i=1;i<=n;i++){
                if (i%2==0){
                    sum+=i;
                }
                else {
                    sum-=i;
                }
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}




