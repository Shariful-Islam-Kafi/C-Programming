#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char c;
        scanf("%c",&c);
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='e'||c=='s')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }


    return 0;
}

