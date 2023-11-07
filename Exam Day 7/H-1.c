#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ar[101];
    scanf("%s",&ar);
    int zero=0;
    int one=0;
    for (int i=0;i<strlen(ar);i++){
        if(ar[i]=='0'){
            one=0;
            zero++;
            if(zero==7){
                printf("YES\n");
                return 0;
            }
        }
        if(ar[i]=='1'){
            zero=0;
            one++;
            if(one==7){
                printf("YES\n");
                return 0;
            }
        }

    }
    printf("NO\n");

    return 0;
}

