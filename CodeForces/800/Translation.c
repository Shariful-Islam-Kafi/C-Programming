#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    strrev(a);
    for(int i=0,j=0;i<strlen(a),j<strlen(b);i++,j++){
        if(a[i]!=b[j]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}







