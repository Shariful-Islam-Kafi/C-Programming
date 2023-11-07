#include<stdio.h>
#include<stdbool.h>

int main()
{
    int number_of_subjects;
    printf("Enter Number of Subjects: ");
    scanf("%d",&number_of_subjects);
    bool failed = false;
    int total_grade_point = 0;


    for (int i=1;i<=number_of_subjects;i++){
        printf("Enter Marks: ");
        int marks,gradepoint;
        scanf("%d",&marks);
        if (marks>=80){
            printf("Grade = A+\n");
            gradepoint=5;
        }
        else if (marks>=70){
            printf("Grade = A\n");
            gradepoint = 4;

        }
        else if (marks>=60){
            printf("Grade = B\n");
            gradepoint = 3;

        }
        else if (marks>=50){
            printf("Grade = C\n");
            gradepoint = 2;

        }
        else if (marks>=40){
            printf("Grade = D\n");
            gradepoint = 1;

        }
        else {
            printf("Grade = 0\n");
            gradepoint = 0;
            failed = true;
        }
        total_grade_point+=gradepoint;
        printf("Grade Point = %d\n",gradepoint);



    }
        if (failed){
            printf("You have failed. GPA = 0\n");
        }
        else {
            double gpa = (double)total_grade_point/number_of_subjects;
            printf("GPA = %.2lf\n",gpa);
        }



    return 0;
}
