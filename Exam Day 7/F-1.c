#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int t,ans=0,res;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        char c[n];
        scanf("%s",&c);

        if(strlen(c)==11 && c[0]=='8'){
            printf("YES\n");
        }
        if(strlen(c)==11 && c[0]!='8'){
            printf("NO\n");
        }
        if(strlen(c)>11 && c[0]=='8'){
            printf("YES\n");
        }
        if(strlen(c)>11 && c[0]!='8'){
            for(int j=0;j<strlen(c);j++){
                ans++;
                if(c[j]=='8'){
                    break;
                }
                res=strlen(c)-ans;
                if(res>=11){
                    printf("YES\n");
                    break;
                }
                else {
                    printf("NO\n");
                    break;
                }
            }
        }
        if(strlen(c)<11) {
            printf("NO\n");
        }

    }

    return 0;
}


