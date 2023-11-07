#include<stdio.h>
#include<string.h>
#include<stdbool.h>
float make_average(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    float av=(float)sum/n;

    return av;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    float avg=make_average(ar,n);
    printf("%f\n",avg);

    return 0;
}

