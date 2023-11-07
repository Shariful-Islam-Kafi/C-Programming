#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    int counter[26]={0};

    for (int i=0;i<strlen(a);i++){
        char value = a[i];

        if (value>='a'&&value<='z'){
            counter[value-'a']++;
        }
        if (value>='A'&&value<='Z'){
            counter[value-'A']++;
        }


    }
    for (char i='a',j='A';i<='z',j<='Z';i++,j++){
        if (counter[i-'a']==0||counter[j-'A']==0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");





    return 0;
}






