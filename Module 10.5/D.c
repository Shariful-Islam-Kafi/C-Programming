#include<stdio.h>
int main()
{
    int v,a,b,c;
    scanf("%d %d %d %d",&v,&a,&b,&c);
    for (;;){
        if (v>=a){
            v-=a;
            if (v>=b){
                v-=b;
                if (v>=c){
                    v-=c;
                }
                else {
                    printf("T\n");  break;
                }
            }
            else {
                printf("M\n");  break;
            }

        }
        else {
            printf("F\n");  break;
        }
    }

    return 0;
}






