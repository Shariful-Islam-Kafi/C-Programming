#include<stdio.h>
#include<limits.h>
int main()
{
    float n;
    scanf("%f",&n);
    float x = n-(int)n;
    if (x>=0.5){
        n = n+1;
    }

    printf("%d\n",(int)n);



    return 0;
}




