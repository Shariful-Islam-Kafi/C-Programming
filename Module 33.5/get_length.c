#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int get_length(char input[])
{
    int index=0;
    while(input[index]!='\0'){
        index++;
    }
    return index;
}
int main()
{
    char a[]="vsujvfyjkm";
    int len=get_length(a);
    printf("%d\n",len);
    return 0;
}
