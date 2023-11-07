/*Write a C program that takes a string as input and tell if that string contains all digits from 0 to 9.
The maximum length of string could be 1000.
For example:
Input 1:
Ab1DH5shb0djb4r1r5rgr1
Output 1:
NO

Input 2:
1hHfbG5D122Dj887D4HYy9520G63F14F6pLmmn578
Output 2:
YES
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001];
  scanf("%s",s);
  strupr(s);
  int counter[200]={0};
  for(int i=0;i<strlen(s);i++)
  {
      if(s[i]>='0' && s[i]<='9'){
        counter[s[i]-'0']++;
      }



  }
  for(char i='0';i<='9';i++)
  {
      if(counter[i-'0']==0)
      {
          printf("NO\n");
          return 0;
      }
  }
  printf("YES\n");

   return 0;
}

