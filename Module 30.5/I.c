#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char ar[n];
   for (int i=0;i<n;i++){
    scanf("%s",&ar[i]);
   }
   int counter[26]={0};
   for (int i=0;i<n;i++){
    char value=ar[i];
    counter[value-'a']++;
   }
   for (char i='a';i<='z';i++){
    if(counter[i-'a']%2==0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
   }


    return 0;
}







