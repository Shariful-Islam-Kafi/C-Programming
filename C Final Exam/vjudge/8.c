#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i+=2)

    {
        for(int j=i+2;j<strlen(s);j+=2)
        {
            if(s[i]>=s[j])
            {
                char val=s[i];
                s[i]=s[j];
                s[j]=val;
            }
        }

    }
    printf("%s\n",s);




    return 0;
}

