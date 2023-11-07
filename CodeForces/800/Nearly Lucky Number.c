#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char s[30];
    scanf("%s",&s);
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
        else {
            count=0;
            printf("NO\n");
            return 0;
        }
    }
    while(count>0){
        if(count%10==4 || count%10==7){
            count=(count-count%10)/10;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");



    return 0;
}




