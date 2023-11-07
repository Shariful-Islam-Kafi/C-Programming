#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char a[1001];
    fgets(a,1001,stdin);
    a[strlen(a)-1]='\0';

    int ans=0;
    int counter[26]={0};

    for (int i=0;i<strlen(a);i++){
        char value=a[i];
        counter[value-'a']++;
    }

    for (char val='a';val<='z';val++){
        if (counter[val-'a']!=0){
            ans++;
        }
    }
    printf("%d\n",ans);




    return 0;
}





