#include<stdio.h>

int main()
{
     int H,W,h,w;
     scanf("%d %d",&H,&W);
     scanf("%d %d",&h,&w);
     int x = H-h;
     int y = W-w;
     printf("%d",x*y);


   return 0;
}
