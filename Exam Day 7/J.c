#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ar[101];
    scanf("%s",&ar);
    int ans=0;
    for(int i=0;i<strlen(ar);i++){
        if(ar[i]>='A'&&ar[i]<='Z'){
            ans++;
        }
        if(ans==strlen(ar)){
            for(int j=0;j<strlen(ar);j++){
                if(ar[j]>='A'&&ar[j]<='Z'){
                    ar[j]=tolower(ar[j]);
                }
                if(ar[j]>='a'&&ar[j]<='z'){
                    ar[j]=toupper(ar[j]);
                }
            }
        }


    }
    printf("%s",ar);
    return 0;
}

