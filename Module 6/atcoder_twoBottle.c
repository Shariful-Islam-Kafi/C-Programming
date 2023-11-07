#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int water_left = A-B;

//    if (water_left>=C){
//        printf("0\n");
//    }
//    else {
//        C-=water_left;
//        printf("%d\n",C);
//    }
    int water_poured = water_left>=C ? 0:C-water_left;
    printf("%d\n",water_poured);



    return 0;
}
