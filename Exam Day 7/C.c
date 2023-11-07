#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ch[1001];
    scanf("%s",&ch);
    int counter[10]={0};
    for (int i=0;i<strlen(ch);i++){
        int value=ch[i]-'0';
        if (value >=0 && value <=9){
            counter[value]++;

        }

    }
    for (int i=0;i<10;i++){
        printf("%d ",counter[i]);
    }

    return 0;
}

