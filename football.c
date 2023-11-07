#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ch[102];
    scanf("%s",&ch);
    int n=strlen(ch);
    int count=0;
    if(n<7){
        printf("NO\n");
    }
    else {
        for (int i=0;i<n-6;i++){
            if(ch[i]=='1'&&ch[i+1]=='1'&&ch[i+2]=='1'&&ch[i+3]=='1'&&ch[i+4]=='1'&&ch[i+5]=='1'&&ch[i+6]=='1'){
                printf("YES\n");
                count++;
                break;
            }
            if (ch[i]=='0'&&ch[i+1]=='0'&&ch[i+2]=='0'&&ch[i+3]=='0'&&ch[i+4]=='0'&&ch[i+5]=='0'&&ch[i+6]=='0'){
                printf("YES\n");
                count++;
                break;
            }
        }
        if (count==0){
            printf("NO\n");
        }
    }

    return 0;
}

