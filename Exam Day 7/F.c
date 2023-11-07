#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    while(n--){
        int a;
        int ans=0;
        scanf("%d",&a);
        char c[a];
        scanf("%s",c);
        for(j=0;j<a;j++){
            if(c[j]=='8'){
                break;
            }
        }
        if(a-j>=11){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }




    return 0;
}

