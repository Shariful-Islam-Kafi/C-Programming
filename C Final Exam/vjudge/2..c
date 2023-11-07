#include<stdio.h>
#include<string.h>
int main()
{
    char s[52];
    scanf("%s",&s);
    int count1=0,count2=0;
    for(int i=0;i<strlen(s);i++)
    {
        char val=s[i];
        if(val=='a')
        {
            count1++;
        }
        else
        {
            count2++;

        }
    }
    if(count1>count2)
    {
        printf("%d\n",strlen(s));
    }
    else
    {
        printf("%d\n",2*count1-1);
    }

    return 0;
}
