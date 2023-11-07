#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    scanf("%d %c %d",&num1,&op,&num2);
    if (num2!=0){
        if (op=='+'){
        printf("%d\n",num1+num2);
        }
        else if (op=='-'){
        printf("%d\n",num1-num2);
        }
        else if (op=='*'){
        printf("%d\n",num1*num2);
        }
        else if (op=='/'){
        printf("%d\n",num1/num2);
        }
    }
    else {
        printf("Cannot divide by 0\n");
    }


    return 0;
}

