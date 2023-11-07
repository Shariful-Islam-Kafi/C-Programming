#include<stdio.h>
#include<limits.h>

int main()
{
    int A=0;
    int D=0;
//    char s[1000];
    int n;
    scanf("%d",&n);
    getchar();
    for (int i=1;i<=n;i++){
            char s;
            scanf("%c",&s);


        if (s=='A'){
            A++;
        }
        else if (s=='D'){
            D++;
        }
    }
    if (A>D){
        printf("Anton\n");
    }
    else if (A<D){
        printf("Danik\n");
    }
    else {
        printf("Friendship\n");
    }


       return 0;
}

