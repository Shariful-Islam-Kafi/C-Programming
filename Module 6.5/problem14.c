#include<stdio.h>
#include<stdbool.h>

int main()
{
    int term,number_of_subject;
    printf("Enter Number of Term: ");
    scanf("%d",&term);
    bool failed = false;
    int total_grade_point = 0;
    for(int i=1;i<=term;i++){
        printf("Term %d:\n",i);
        printf("Enter Number of Subjects: ");
        scanf("%d",&number_of_subject);
        for (int j=1;j<=number_of_subject;j++){
            printf("Enter mark of subject %d = ",j);
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
            double gpa = (double)total_grade_point/number_of_subject;
            printf("Term GPA = %.2lf\n",gpa);
            }
    }



    return 0;
}
