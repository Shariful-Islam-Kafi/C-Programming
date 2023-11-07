#include<stdio.h>
#include<limits.h>

int main()
{
      int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int runTime01 = a;
    int runTime02 = d;
    if(a+c<x){
        runTime01 += x-(a+c);
    }
    if(d+f<x){
        runTime02 = x-(d+f);
    }
    int Takahashi=runTime01*b;
    int Aoki=runTime02*e;

    if(Takahashi>Aoki){
        printf("Takahashi\n");
    }
    else if(Aoki>Takahashi){
        printf("Aoki\n");
    }else{
        printf("Draw\n");
    }
}
