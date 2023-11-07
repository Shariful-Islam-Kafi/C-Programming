
#include <stdio.h>

int main()
{
  /* printf("Enter principle: ");
   int P;
   scanf("%d",&P);

   printf("Enter time: ");
   int T;
   scanf("%d",&T);

   printf("Enter rate: ");
   double R;
   scanf("%lf",&R);

   double SI = (P*T*R)/100;

   printf("Simple interest = %lf\n", SI);

   double PI = P + SI;

   printf("Principle + Interest = %.1lf\n",PI);    */


 /*  printf("Enter number: ");
   float num;
   scanf("%f", &num);

   int a;
   float b;
   a = num /1;
   printf("Integer part: %d\n",a);
   b = num - a;
      printf("Real part: %.3f",b); */


 /*  printf("Input the working hour: ");

   int hour;
   scanf("%d",&hour);

   double salary = hour * 15000;
   printf("Salary: %.2lf",salary);*/



 /*  printf("Enter temperature in Celsius = ");
   float C;
   scanf("%f",&C);

   float F = (C*9/5)+32;
   printf("Temperature in Fahrenheit = %.1f F",F);*/



  /*  printf("Temperature in fahrenheit = ");
   float F;
   scanf("%f",&F);

   float C = (F-32)*5/9;
   printf("Temperature in celsius = %.2f C",C); */

 /* printf("Input no. of days: ");
  int input_days;
  scanf("%d",&input_days);

  int year,month,days;
  year = input_days / 365;
  days = input_days % 365;
  month = days / 30;
  days = days % 30;

  printf("%d Years(S)\n",year);
  printf("%d Month(S)\n",month);
  printf("%d Day(S)\n",days);*/

  printf("Weight-Item1: ");
  float wi;
  scanf("%f",&wi);
  printf("No. of Item1: ");
  float ni;
  scanf("%f",&ni);


  printf("Weight-Item2: ");
  float wi2;
  scanf("%f",&wi2);
  printf("No. of Item2: ");
  float ni2;
  scanf("%f",&ni2);

  float value1,value2,avg;

  value1 = wi * ni;
  value2 = wi2 * ni2;
  avg = (value1+value2)/(ni+ni2);

  printf("Average Value = %f",avg);





  return 0;

}
