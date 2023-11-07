#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",&a);
    strcpy(b,a);
    strrev(b);
    int c=0;

    for (int i=0;i<strlen(a);i++){
        if (a[i]!=b[i]){
            printf("No\n");
            c++;
            break;
        }

    }
    if (c==0){
        printf("Yes\n");
    }


    return 0;
}

