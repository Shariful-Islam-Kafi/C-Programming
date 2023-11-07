There are 4 different ways to use functions.
1.  Function with parameter and return value.
Example:
 #include<stdio.h>
int get_length(char input[])
{
    int index=0;
    while(input[index]!='\0')
    {
        index++;
    }
    return index;
}
int main()
{
	char a[]="Hello";
	int L1=get_length(a);
	printf("%d\n",L1);
    return 0;
}

2.Function with parameter and No return value.
Example:
#include<stdio.h>
#include<string.h>

void check_char(char input[],char ch)
{
    for(int i=0;i<strlen(input);i++)
    {
        char val=input[i];
        if(val==ch)
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}
int main()
{
	char a[]="Hello";
	char c='l';
	check_char(a,c);
    return 0;
}

3.Function with No parameter and return value.
Example:
#include<stdio.h>

int make_sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main()
{
	int s=make_sum();
	printf("%d\n",s);
    return 0;
}

4.Function with No parameter and No return value.
Example:
#include<stdio.h>
void take_array(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
    {
        take_array();
    }
    return 0;
}

