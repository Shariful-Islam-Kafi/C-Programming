#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    for (int i=1;i<=n;i++){
        scanf("%s",&str[i]);
    }
    printf("%s",str);

    return 0;
}
