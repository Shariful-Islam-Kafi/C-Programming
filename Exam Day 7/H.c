#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ar[101];
    scanf("%s",&ar);
    int ans=0,t=0;
    bool digit=false;
    for (int i=0;i<strlen(ar);i++){
        char value =ar[i];
        if(value=='0'){
            digit=true;
            ans++;
            if(ans==7){
                printf("YES\n");
                return 0;
            }
            else{
                printf("NO\n");
                return 0;
            }
        }
        if(value=='1'){
            digit=false;
            ans=0;
        }

    }
//    printf("NO\n");
//    return 0;
    for (int i=0;i<strlen(ar);i++){
        char value =ar[i];
        if(value=='1'){
            digit=true;
            t++;
            if(t==7){
                printf("YES\n");
                return 0;
            }
            else{
                printf("NO\n");
                return 0;
            }
        }
        if(value=='0'){
            digit=false;
            t=0;
        }

    }
//    printf("NO\n");



    return 0;
}

