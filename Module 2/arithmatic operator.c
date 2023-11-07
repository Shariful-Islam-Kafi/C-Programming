#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
//    double jogfol = num1+num2;
//    double biyogfol = num1-num2;
//    double gunfol = num1*num2;
//    double vagfol = num1/num2;
//    printf("%d + %d = %d\n",num1,num2,jogfol);
//    printf("%d - %d = %d\n",num1,num2,biyogfol);
//    printf("%d * %d = %d\n",num1,num2,gunfol);
//    printf("%d %% %d = %lf\n",num1,num2,vagfol);
     double vagfol = (double)num1 / (double)num2;
    printf("%d %% %d = %lf\n",num1,num2,vagfol);



    return 0;
}
