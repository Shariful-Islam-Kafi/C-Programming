#include<iostream>
using namespace std;

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
            cout<<"This number is available. The index Of this number is "<<i<<"\n";
            return;
        }
    }
    cout<<"Not Found\n";
}
void update_array(int *a,int n,int pos)
{
    if(pos>=0 && pos<10)
    {
        cout<<"Enter value: ";
        int x;
        cin>>x;
        a[pos]=x;
    }
    else
    {
        cout<<"Invalid Index number\n";
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
        cout<<"Invalid Index number\n";
    }

}
void display_array(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
     cout<<"\n";
}
void insert_array(int *a,int n)
{
    cout<<"Enter number: ";
    int x;
    cin>>x;
    a[index]=x;
    index++;

    for(int i=0;i<n;i++){
        if(index>n)
        {
            cout<<"Insert not possible\n";
            break;
        }

    }

}

int main()
{
    int ar[10]={0};

    while(1)
    {
        cout<<"1.Insert\n2.Display\n3.Delete\n4.Update\n5.Search\n6.Sort\n";
        cout<<"Choose Option: ";
        int n;
        cin>>n;
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
            cout<<"Enter Index number: ";
            int x;
            cin>>x;
            delete_array(ar,10,x);
        }
        if(n==4)
        {
            cout<<"Enter index number: ";
            int x;
            cin>>x;
            update_array(ar,10,x);
        }
        if(n==5)
        {
            cout<<"Enter Value: ";
            int x;
            cin>>x;
            search_array(ar,10,x);
        }
        if(n==6)
        {
            sort_array(ar,10);
        }

    }


   return 0;
}



