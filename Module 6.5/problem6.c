#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n>=0){
        if(n>=40){
            printf("Its Very Hot\n");
        }
        else if (n>=30){
            printf("Its Hot\n");
        }
        else if (n>=20){
            printf("Normal in Temp\n");
        }
        else if (n>=10){
            printf("Cold weather\n");
        }
        else {
            printf("Very Cold weather\n");
        }
    }
    else {
        printf("Freezing weather\n");
    }

    return 0;
}


