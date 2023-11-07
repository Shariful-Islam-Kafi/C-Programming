#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=0,c=0;
    for (int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a-b>0)   m++;
        if(a-b<0)   c++;
    }
    if(m>c){
        printf("Mishka\n");
    }
    else if(m<c){
         printf("Chris\n");
    }
    else {
         printf("Friendship is magic!^^\n");
    }



    return 0;
}





