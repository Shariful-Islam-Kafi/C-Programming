#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char c[1001];
    scanf("%s",&c);
    if(c[0]>='A'&&c[0]<='Z'){
        printf("%s\n",c);
    }
    if(c[0]>='a'&&c[0]<='z'){
        c[0]=toupper(c[0]);
        printf("%s\n",c);
    }


    return 0;
}

