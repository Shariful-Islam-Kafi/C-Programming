#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char c[101];
    scanf("%s",&c);
    int counter[26]={0};
    for(int i=0;i<strlen(c);i++){
        char val=c[i];
        counter[val-'a']++;
    }
    int ans=0;
    for(char i='a';i<='z';i++){
        if(counter[i-'a']!=0){
            ans++;
        }

    }
    if(ans%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }



    return 0;
}


