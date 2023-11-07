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
    int i=0,j=n-1,count=1;
    int sereja=0,dima=0;
    while(i<=j){
        if (count%2!=0){
            if(ar[i]>ar[j]){
               sereja+=ar[i];
               i++;
            }
            else {
                sereja+=ar[j];
                j--;
            }
        }
        else {
            if (ar[i]>ar[j]){
                dima+=ar[i];
                i++;
            }
            else{
                dima+=ar[j];
                j--;
            }
        }
        count++;

    }
    printf("%d %d\n",sereja,dima);



    return 0;
}






