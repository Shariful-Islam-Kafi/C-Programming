#include<stdio.h>
#include<limits.h>
int main()
{
    int year,century;
    scanf("%d",&year);
    if (year % 100 == 0){
        century=year/100;
    }
    else{
        century=year/100+1;
    }
    printf("%d\n",century);


    return 0;
}

