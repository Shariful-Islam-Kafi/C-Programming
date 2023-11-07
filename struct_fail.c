#include<stdio.h>
struct Student
{
    char name[100];
    int id;
    int marks;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",&ar[i].name,&ar[i].id,&ar[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i].marks<33)
        {
            printf("%s %d %d\n",ar[i].name,ar[i].id,ar[i].marks);
        }
    }



    return 0;
}
