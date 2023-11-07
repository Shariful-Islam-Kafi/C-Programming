#include<stdio.h>
#include<string.h>
void take_array()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",ar[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");



}
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        take_array();
    }
    return 0;

}
