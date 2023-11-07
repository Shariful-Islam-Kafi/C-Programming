#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int find_firstIndex(char *str,char c)
{
    for(int i=0;i<strlen(str);i++){  //if want last index
        if(str[i]==c){                //for(int i=strlen(str)-1;i>=0;i--)
            return i;
        }
    }
    return -1;
}

int main()
{
    char s[]="abckdhkalis";
    printf("%d\n",find_firstIndex(s,'k'));

    return 0;
}

