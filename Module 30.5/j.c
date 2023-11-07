#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ar[n];
    scanf("%s",&ar);
    int count=0;
    for (int i=0;i<n;i++){
        char value=ar[i];
        if(value=='x'){
            count++;
        }
    }
    printf("%d",count);
//    int cnt=0;
//    for (int i=0;i<n;i++){
//        if (count<=2){
//            printf("0\n");
//            return 0;
//        }
//        else if (count>2){
//            count--;
//            cnt++;
//        }
//
//
//    }
//    printf("%d\n",cnt);

    return 0;
}

