#include <stdio.h>
int main()
{
    printf("Enter radius = ");
    double radius;
    scanf("%lf",&radius);
    const double PI = 3.1416;
    double parameter = 2 * PI * radius;
    printf("Parameter = %.2lf\n",parameter);
    double area = PI * radius * radius;
    printf("Area = %.2lf\n",area);

    return 0;


}
