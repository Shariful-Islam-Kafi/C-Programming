#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    while(1){
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        switch(n){
        case 1:
            printf("Kafi Loves you so much\n");
            break;
        case 2:
            printf("Kafi Loves Arrietty so much\n");
            break;
        case 3:
            printf("Kafi Loves Tatum so much\n");
            break;
        case 4:
            printf("I miss you so much\n");
            break;
        case 5:
            printf("Bhalobashi Tumake\n");
            break;
        default:
            printf("Tmi keno bujhbo na!\nI R koto wait koraba\n");
        }
    }

    return 0;
}

