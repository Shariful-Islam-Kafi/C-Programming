#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int foo()
{
    printf("foo\n");
}
int bar()
{
    printf("bar\n");
}
int main()
{
    foo(bar());

    return 0;
}
//output bar foo
