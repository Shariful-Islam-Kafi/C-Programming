#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",&s1,&s2);
    strupr(s1);
    strupr(s2);
    strcmp(s1,s2);
    if (strcmp(s1,s2)==0){
        printf("0\n");
    }
    else if (strcmp(s1,s2)>0){
        printf("1\n");
    }
    else {
        printf("-1\n");
    }


    return 0;
}
