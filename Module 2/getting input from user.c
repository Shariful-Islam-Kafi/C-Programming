#include<stdio.h>
int main ()
{
    int mark_english,mark_math;
    float temp;
    printf("Enter marks in English and Math: ");
    scanf("%d %d",&mark_english,&mark_math);

    printf("Enter temp: ");
    scanf("%f",&temp);

    int total_mark = mark_english + mark_math;

    printf("Your Enlish mark is: %d\nYour Math mark is: %d\nYour Total mark is: %d\nAnd Today Tempareture is: %f\n",mark_english,mark_math,total_mark,temp);

    return 0;
}
