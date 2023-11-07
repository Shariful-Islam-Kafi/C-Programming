#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int largest = ar[0],second_L=ar[0];
    for (int i=0;i<n;i++){
        int val =ar[i];
        if (val>largest){
            largest=val;

        }
    }
    for (int i=0;i<n;i++){
        int val=ar[i];
        if(val<largest && val>second_L){
            second_L=val;
        }
    }
    printf("Second largest = %d",second_L);


    return 0;
}


