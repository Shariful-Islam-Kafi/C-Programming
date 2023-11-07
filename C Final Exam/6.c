#include<stdio.h>
#include<string.h>
int index=0;
void sort_array(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}
void search_array(int *a,int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            printf("This number is available. The index Of this number is %d\n",i);
            return;
        }
    }
    printf("Not Found\n");
}
void update_array(int *a,int n,int pos)
{
    if(pos>=0 && pos<10)
    {
        printf("Enter value: ");
        int x;
        scanf("%d",&x);
        a[pos]=x;
    }
    else
    {
        printf("Invalid Index number\n");
    }

}
void delete_array(int *a,int n,int pos)
{
    if(pos>=0 && pos<10)
    {
        a[pos]=NULL;
    }
    else
    {
        printf("Invalid Index number\n");
    }

}
void display_array(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
     printf("\n");
}
void insert_array(int *a,int n)
{
    printf("Enter number: ");
    int x;
    scanf("%d",&x);
    a[index]=x;
    index++;

    for(int i=0;i<n;i++){
        if(index>n)
        {
            printf("Insert not possible\n");
            break;
        }

    }

}

int main()
{
    int ar[10]={0};

    while(1)
    {
        printf("1.Insert\n2.Display\n3.Delete\n4.Update\n5.Search\n6.Sort\n");
        printf("Choose Option: ");
        int n;
        scanf("%d",&n);
        if(n==1)
        {
            insert_array(ar,10);
        }
        if(n==2)
        {
            display_array(ar,10);
        }
        if(n==3)
        {
            printf("Enter Index number: ");
            int x;
            scanf("%d",&x);
            delete_array(ar,10,x);
        }
        if(n==4)
        {
            printf("Enter index number: ");
            int x;
            scanf("%d",&x);
            update_array(ar,10,x);
        }
        if(n==5)
        {
            printf("Enter Value: ");
            int x;
            scanf("%d",&x);
            search_array(ar,10,x);
        }
        if(n==6)
        {
            sort_array(ar,10);
        }

    }


   return 0;
}


