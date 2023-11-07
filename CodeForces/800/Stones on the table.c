#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0,r=0,g=0,b=0;
    char c[n];
    scanf("%s",&c);
    for (int i=0;i<strlen(c);i++){
        if(c[i]=='R'){
            r++;
            g=0,b=0;
            if(r==2){
                count++;
                r=1;
            }
        }
        if(c[i]=='G'){
            g++;
            r=0,b=0;
            if(g==2){
                count++;
                g=1;
            }
        }
        if(c[i]=='B'){
            b++;
            g=0,r=0;
            if(b==2){
                count++;
                b=1;
            }
        }

    }
    printf("%d\n",count);

    return 0;
}

