#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    scanf("%s",&ch);
    int n;
    n = strlen(ch);
    for (int i=0;i<n;i++){
        if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            printf("%d ",i);
        }
    }
    printf("\n");


    return 0;
}


