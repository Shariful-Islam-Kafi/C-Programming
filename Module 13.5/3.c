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
    int max=ar[0],count=0;
    for (int i=0;i<n;i++){
        if (ar[i]>max){
            max=ar[i];
            count++;
        }
    }
    printf("Maximum is %d\nMaximum occurs %d times",max,count);



    return 0;
}

