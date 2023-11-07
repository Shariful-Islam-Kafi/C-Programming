#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int check_palindrome(char a[])
{
    int i=0,cnt=0,j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            cnt++;
        }
        i++;
        j--;
    }
    return cnt;
}

int main()
{
    char a[100];
    scanf("%s",&a);
    int x=check_palindrome(a);
    printf("%d\n",x);
    return 0;
}

