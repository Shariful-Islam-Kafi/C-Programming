#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char c[100000];
    scanf("%s",&c);
    int sum=0;
    for (int i=0;i<strlen(c);i++){
        int value=c[i]-'0';
        sum+=value;
    }
    printf("%d\n",sum);

    return 0;
}

