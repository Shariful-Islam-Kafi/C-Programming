#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int one=0,zero=0;
    char ar[n];
    scanf("%s",&ar);
    for (int i=0;i<strlen(ar);i++){
        char value=ar[i];
        if(value=='n'){
            one++;
        }
        if(value=='z'){
            zero++;
        }
    }
    for(int i=0;i<one;i++){
        printf("1 ",i);
    }
    for(int i=0;i<zero;i++){
        printf("0 ",i);
    }

    return 0;
}

