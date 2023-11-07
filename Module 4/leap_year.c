#include<stdio.h>
#include<stdbool.h>
int main ()
{
//    char ch;
//    scanf("%c",&ch);
//
//    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
//        printf("Vowel");
//    }
//    else {
//        printf("Consonent");
//    }


    int year;
    scanf("%d",&year);
    bool is_leap_year = (year % 4 == 0) && (year % 100 !=0 || year % 400 ==0);
    if (is_leap_year){
        printf("Leap Year");
    }
    else {
        printf("Not Leap Year");
    }


    return 0;
}
