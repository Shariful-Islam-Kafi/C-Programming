#include <stdio.h>

int main()
{

    int target=40;
    while (1){
        printf("enter anount: ");
        int given;
        scanf("%d",&given);
        if (given ==5 || given==10|| given ==20){
            target-=given;
            if (target==0){
                printf("thank you\n");
                break;
            }
           else if(target<0){
             target=-target;;
                printf("take %d taka.thank you\n",target);
               break;
           }
        printf("amount deu= %d\n",target);

        }
        else {
            printf("Invalid. try again\n");
        }

    }

    return 0;

}
