#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    int index=0;
    while(n>0){
        int digit=n%2;
        n/=2;
        str[index]=digit+'0';
        index++;
    }
    str[index]='\0';
    int i=0,j=strlen(str)-1;
    while(i<j){
        char tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
        i++;
        j--;
    }
    printf("Binary-> %s\n",str);
    int sum=0,p=strlen(str)-1;
    for(int i=0;i<strlen(str);i++){
        char c=str[i];
        int digit=c-'0';
        sum+=digit*pow(2,p);
        p--;
    }
    printf("Decimal-> %d\n",sum);



    return 0;
}

