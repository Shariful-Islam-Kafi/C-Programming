#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=0;i<n;i++){
        char c[100];
        scanf("%s",&c);
        if (c[0]=='T'){
            sum+=4;
        }
        else if (c[0]=='C'){
            sum+=6;
        }
        else if(c[0]=='O'){
            sum+=8;
        }
        else if (c[0]=='D'){
            sum+=12;
        }
        else if(c[0]=='I'){
            sum+=20;
        }
    }
    printf("%d\n",sum);



    return 0;
}



