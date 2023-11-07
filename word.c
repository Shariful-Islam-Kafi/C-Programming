#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char ar[100];
    scanf("%s",&ar);
    int upper=0;
    int lower=0;
    for (int i=0;i<strlen(ar);i++){
        if(ar[i]>='A'&&ar[i]<='Z'){
            upper++;
        }
        if (ar[i]>='a'&&ar[i]<='z'){
            lower++;
        }

    }
    if (upper>lower){
        printf("%s\n",strupr(ar));
    }
    else if(lower>upper){
        printf("%s\n",strlwr(ar));
    }
    else {
        printf("%s\n",strlwr(ar));
    }


    return 0;
}

