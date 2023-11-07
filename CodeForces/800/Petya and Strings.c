#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=tolower(a[i]);
        }

    }
    for(int i=0;i<strlen(b);i++){
        if(b[i]>='A'&&b[i]<='Z'){
            b[i]=tolower(b[i]);
        }

    }


    int val=strcmp(a,b);
    printf("%d\n",val);

    return 0;
}

