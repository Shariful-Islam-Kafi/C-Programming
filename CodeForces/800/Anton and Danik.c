#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,anton=0,danik=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='A')
            anton++;
        else
            danik++;
    }
    if(anton>danik)
        printf("Anton\n");
    else if(danik>anton)
        printf("Danik\n");
    else
        printf("Friendship\n");


    return 0;
}






