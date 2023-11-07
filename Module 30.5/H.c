#include<stdio.h>
#include<string.h>
int main()
{
    char ar[201];
    scanf("%s",&ar);
    for (int i=0;i<strlen(ar);){
        if(ar[i]=='.'){
            printf("0");
            i++;
        }
        else if(ar[i]=='-'&&ar[i+1]=='.'){
            printf("1");
            i+=2;
        }
        else if(ar[i]=='-'&&ar[i+1]=='-'){
            printf("2");
            i+=2;
        }
    }



    return 0;
}







