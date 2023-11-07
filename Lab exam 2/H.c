#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int newbie = 40;
    int pupil = 70;
    int spec  = 90;
    int expe = 100;

    if (n>=0 && n<40){
        printf("%d\n",newbie-n);
    }
    else if (n>=40 && n<70){
        printf("%d\n",pupil-n);
    }
    else if (n>=70 && n<90){
        printf("%d\n",spec-n);
    }
    else if (n>=90 && n<100){
        printf("%d\n",expe-n);
    }
    else if (n==100){
        printf("expert\n");
    }


    return 0;
}



