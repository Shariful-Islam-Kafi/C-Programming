#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    scanf("%s",&ar);
    int count[26]={0};

    for (int i=0;i<strlen(ar);i++){
        char value = ar[i];
        count[value-'a']++;
    }

    for (char val='a';val<='z';val++){
        if (count[val-'a']>0){
            printf("Value -> %c, Count-> %d\n",val,count[val-'a']);
        }
    }


    return 0;
}
