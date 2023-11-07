#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
int main()
{
    char c[101];
    scanf("%s",&c);


    int l=0,u=0;
    for (int i=0;i<strlen(c);i++){
        if(c[i]>='A'&&c[i]<='Z'){
            u++;
        }
        if(c[i]>='a'&&c[i]<='z'){
            l++;
        }
    }
    if(u>l){
       for(int i=0;i<strlen(c);i++){
            c[i]=toupper(c[i]);
       }
       printf("%s\n",c);


    }
    if(u<l){
       for(int i=0;i<strlen(c);i++){
            c[i]=tolower(c[i]);
       }
       printf("%s\n",c);


    }
    if(u==l){
       for(int i=0;i<strlen(c);i++){
            c[i]=tolower(c[i]);
       }
       printf("%s\n",c);


    }



    return 0;
}




