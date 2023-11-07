#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int count_zero(char *a,int n)
{
    int cnt=0;
    for(int i=0;i<strlen(a);i++){

        if(a[i]=='0'){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    int x=count_zero(s,n);
    printf("%d\n",x);

    return 0;
}

