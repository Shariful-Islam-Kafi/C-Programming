#include <stdio.h>
int main ()
{
//    int x, y;
//    scanf("%d %d", &x, &y);
//    printf("%d\n", x/y);
//    printf("Hello\n");
//    printf(" nice\n");
//    printf("   to\n");
//    printf(" meet\n");
//    printf("  you\n");

    //problem no:7
//    int height;
//    printf("Enter height is inches: ");
//    scanf("%d",&height);
//    int height_in_feet = height/12;
//    int height_in_inch = height%12;
//    printf("Your height is %d feet %d inches\n",height_in_feet,height_in_inch);

//Enter height of rectangle: 10
//Enter width of rectangle: 30
//Area is 300
//Perimeter is 80

    int height,width,area,perimeter;
    printf("Enter height of rectangle: ");
    scanf("%d",&height);
    printf("Enter width of rectangle: ");
    scanf("%d",&width);
    area = height*width;
    perimeter = 2*(height+width);
    printf("Area is %d\nPerimeter is %d\n",area,perimeter);

    return 0;
}
