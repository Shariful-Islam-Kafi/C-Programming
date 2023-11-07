#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    int index=0;
    while(n>0)
    {
        int digit=n%2;
        n/=2;
        str[index]=digit+'0';
        index++;
    }
    str[index]='\0';
    int i=0,j=strlen(str)-1;
    while(i<j)
    {
        char tmip=str[i];
        str[i]=str[j];
        str[j]=tmip;
        i++;
        j--;
    }
    printf("%s\n",str);


    return 0;
}
