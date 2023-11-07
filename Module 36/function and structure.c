#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct Student
{
    char name[100];
    int roll;
    int marks;
};
void print_struct(struct Student a)
{
     printf("%s %d %d\n",a.name,a.roll,a.marks);
}

void fun(struct Student *st)
{
    st->marks=100;
}

int main()
{
    struct Student a={"Kafi",53,97};
    fun(&a);
    print_struct(a);

    return 0;
}
