#include<stdio.h>
int main()
{
    int n;
    int a=0,d=0;
    scanf("%d",&n);
    getchar();
    for (int i=1;i<=n;i++){
        char s;
        scanf("%c",&s);

        if (s=='A'){
            a++;
        }
        if (s=='D') {
            d++;
        }

    }
    if (a>d){
        printf("Anton\n");
    }
    else if (d>a){
        printf("Danik\n");
    }
    else  {
        printf("Friendship\n");
    }



    return 0;
}
