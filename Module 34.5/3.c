#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int find_firstIndex(char *a,char b)
{
    for(int i=0;i<strlen(a);i++){
        if(a[i]==b){
            return i;
        }
    }
    return -1;



}
int main()
{
    char ch[]="helloworld";
    printf("%d\n",find_firstIndex(ch,'w'));

    return 0;
}

