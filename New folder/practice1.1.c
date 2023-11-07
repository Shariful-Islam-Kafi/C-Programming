#include <stdio.h>

int main()
{
    /*Enter height of rectangle: 10
    Enter width of rectangle: 30
    Area is 300
    Perimeter is 80*/

    printf("Enter height of rectangles: ");
    int height;
    scanf("%d",&height);
     printf("Enter width of rectangles: ");
    int width;
    scanf("%d",&width);
    int area = height * width;
    int perimeter = 2*(height+width);
    printf("Area is %d\n",area);
    printf("Perimeter is %d\n",perimeter);



    return 0;
}
