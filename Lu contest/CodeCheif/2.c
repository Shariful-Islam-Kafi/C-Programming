#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if (x>=y && x>=z){
            printf("Setter\n");
        }
        else if (y>=x && y>=z){
            printf("Tester\n");
        }
        else {
            printf("Editorialist\n");
        }
    }




    return 0;
}


