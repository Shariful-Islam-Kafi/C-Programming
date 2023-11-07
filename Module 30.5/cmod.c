#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
   int n;
   scanf("%d",&n);
      char ch[n];
      scanf("%s",&ch);
      strupr(ch);
      int counter[26]={0};
      for (int i=0;i<strlen(ch);i++){
            char value=ch[i];
            counter[value-'A']++;

      }
      for (char i='A';i<='Z';i++){
        if (counter[i-'A']==0){
            printf("NO\n");
            return 0;
        }
      }
      printf("YES\n");



    return 0;
}

