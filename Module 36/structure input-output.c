#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct Student
{
    char name[100];
    int roll;
    int marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student highest={.marks=0};
    for(int i=0;i<n;i++){
        struct Student a;
        scanf("%s %d %d",&a.name,&a.roll,&a.marks);
        if(a.marks>highest.marks){
            highest=a;
        }
    }
    printf("%s %d %d\n",highest.name,highest.roll,highest.marks);



    return 0;
}
