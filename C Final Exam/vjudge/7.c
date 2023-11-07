#include<stdio.h>
#include<string.h>
int main()
{
    int L,R;
    scanf("%d %d",&L,&R);
    char s[100005];
    scanf("%s",&s);
    for(int i=L-1,j=R-1;i<=j;i++,j--)
    {
        char tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
    printf("%s\n",s);


    return 0;
}
