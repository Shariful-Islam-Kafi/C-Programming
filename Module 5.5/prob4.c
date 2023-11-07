#include<stdio.h>
int main()
{
    int a,b,res;
    char op;
    scanf("%d %c %d",&a,&op,&b);
        if (op=='+'){
        res = a+b;
        printf("%d %c %d = %d\n",a,op,b,res);
        }
        else if (op=='-'){
        res = a-b;
        printf("%d %c %d = %d\n",a,op,b,res);
        }
        else if (op=='*'){
        res = a*b;
        printf("%d %c %d = %d\n",a,op,b,res);
        }
        else if (op=='/'){
                if (b>0){
                    res = a/b;
                    printf("%d %c %d = %d\n",a,op,b,res);
                }
                else {
                    printf("Math Error!\n");

                }

        }
        else if (op=='%'){
                if (b>0){
                    res = a%b;
                    printf("%d %c %d = %d\n",a,op,b,res);
                }
                else {
                    printf("Cannot divided by 0\n");
                }

        }






    return 0;
}

