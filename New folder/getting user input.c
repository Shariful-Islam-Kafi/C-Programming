#include <stdio.h>

int main()
{
    int marks_english, marks_math;

    printf("Enter marks in English and math= ");
    scanf("%d %d",&marks_english, &marks_math);
    int total_marks = marks_english + marks_math;
    printf("Total mark = %d",total_marks);


    return 0;
}
