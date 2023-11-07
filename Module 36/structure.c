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
    struct Student a={"Kafi",53,95};
    printf("%s %d %d\n",a.name,a.roll,a.marks);
    return 0;
}

