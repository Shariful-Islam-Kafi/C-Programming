#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int Newbie=39;
    int Pupil= 69;
    int Specialist= 89;
    if (n>=0 && n<40){
        printf("%d\n",Newbie-n+1);
    }
   else if (n>=40 && n<70){

        printf("%d\n",Pupil-n+1);
    }
    else if (n>=70 && n<90){
        printf("%d\n",Specialist-n+1);
    }
    else if (n>=90 && n<=100){
        printf("expert\n");
    }


    return 0;
}

