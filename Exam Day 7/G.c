#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char name[5]="heidi";
    char ar[1001];
    scanf("%s",&ar);
    int count=0;
    for(int i=0;i<strlen(ar);i++){
        if(ar[i]==name[count]){
            count++;
        }
        if(count==5){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}

