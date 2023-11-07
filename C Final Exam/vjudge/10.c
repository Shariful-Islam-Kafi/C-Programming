#include<stdio.h>
#include<string.h>
struct Student
{
    char f_name[100];
    char g_name[100];
} ;

int main()
{
    int n;
    scanf("%d",&n);
    struct Student ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s",&ar[i].f_name,&ar[i].g_name);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(ar[i].f_name,ar[j].f_name)==0 && strcmp(ar[i].g_name,ar[j].g_name)==0)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");

    return 0;
}
