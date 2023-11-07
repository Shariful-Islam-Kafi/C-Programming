#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c,n;
    for (int i=1;i<=t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&n);
        int one,two,three;
        if (a>=b && a>=c){
            one = a;
            if (b>=c){
                two = b;
                three = c;
            }
            else {
                two = c;
                three = b;
            }
        }
        else if (b>=a && b>=c){
            one = b;
            if (a>=c){
                two = a;
                three = c;
            }
            else {
                two = c;
                three = a;
            }
        }
        else{

            one = c;
            if (a>=b){
                two = a;
                three = b;
            }
            else {
                two = b;
                three = a;
            }
        }
        int x = one - two;
        int y = one - three;
        n = n-(x+y);
        if (n%3!=0 || n<0){
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }

    }

    return 0;
}



