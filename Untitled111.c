#include<stdio.h>
#include<string.h>
int main()
{
  int N;
  scanf("%d",&N);
  int ar[N];
  for(int i=0;i<N;i++){
    scanf("%d",&ar[i]);
  }
  int L,R;
  scanf("%d %d",&L,&R);
  for(int i=L;i<=R;i++){
    ar[i]=NULL;;
  }
  for(int i=0;i<N;i++){
    printf("%d ",ar[i]);
  }

   return 0;
}

