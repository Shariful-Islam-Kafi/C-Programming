#include <stdio.h>

int main()
{
   /*Enter height is inches: 65
   Your height is 5 feet 5 inches*/
    printf("Enter height in inches: ");
    int height;
    scanf("%d",&height);
    int feet, inch;
    feet = height/12;
    inch = height%12;
    printf("Your height is %d feet %d inches",feet,inch);


    return 0;

}
