#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int i,j,row,col;
    printf("Enter row and column: ");
    scanf("%d %d",&i,&j);
    int a[i][j],b[i][j];
    for(row=0;row<i;row++){
        for(col=0;col<j;col++){
            printf("a[%d][%d] = ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<i;row++){
        for(col=0;col<j;col++){
            printf("b[%d][%d] = ",row,col);
            scanf("%d",&b[row][col]);
        }
    }



    return 0;
}


