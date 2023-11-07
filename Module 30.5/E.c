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

    int max = ar[0];
    int min = ar[0];
    int count=0;
    for (int i=0;i<n;i++){

        if (max<ar[i]){
            max=ar[i];
            count++;
        }
        if (min>ar[i]){
            min=ar[i];
            count++;
        }
    }
    printf("%d\n",count);



    return 0;
}




