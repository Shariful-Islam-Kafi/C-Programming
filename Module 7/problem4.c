#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double sum=0;
    for (int i=1;i<=n;i++){
        float a,b;
        scanf("%f %f",&a,&b);
        double t = a*b;
        sum+=t;

    }
    printf("%.3f\n",sum);




    return 0;
}



