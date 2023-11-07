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
            cout<<"This number is available. The index Of this number is "<<i<<"\n\n";
            return;
        }
    }
    cout<<"Not Found\n\n";
}
void update_array(int *a,int n,int pos)
{
    if(pos>=0 && pos<n)
    {
        cout<<"Enter value: ";
        int x;
        cin>>x;
        cout<<"\n";
        a[pos]=x;
    }
    else
    {
        cout<<"Invalid Index number\n\n";
    }

}
void delete_array(int *a,int n,int pos)
{
    if(pos>=0 && pos<n)
    {
        a[pos]=NULL;
    }
    else
    {
        cout<<"Invalid Index number\n\n";
    }

}
void display_array(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
     cout<<"\n\n";
}
void insert_array(int *a,int n)
{
    cout<<"Enter number: ";
    int x;
    cin>>x;
    cout<<"\n\n";
    a[index]=x;
    index++;

    for(int i=0;i<n;i++){
        if(index>n)
        {
            cout<<"Insert not possible\n\n";
            break;
        }

    }

}

int main()
{
    cout<<"Enter the array size: ";
    int n;
    cin>>n;
    cout<<"\n";
    int ar[n]={0};

    while(1)
    {
        cout<<"1.Insert\n2.Display\n3.Delete\n4.Update\n5.Search\n6.Sort\n7.Exit\n\n";
        cout<<"Choose Option: ";
        int t;
        cin>>t;
        cout<<"\n";
        if(t==1)
        {
            insert_array(ar,n);
        }
        if(t==2)
        {
            display_array(ar,n);
        }
        if(t==3)
        {
            cout<<"Enter Index number: ";
            int x;
            cin>>x;
            cout<<"\n\n";
            delete_array(ar,n,x);
        }
        if(t==4)
        {
            cout<<"Enter index number: ";
            int x;
            cin>>x;
            cout<<"\n\n";
            update_array(ar,n,x);
        }
        if(t==5)
        {
            cout<<"Enter Value: ";
            int x;
            cin>>x;
            cout<<"\n\n";
            search_array(ar,n,x);
        }
        if(t==6)
        {
            sort_array(ar,n);
        }
        if(t==7)
        {
            cout<<"\t\tTHANK YOU!\n\n\t\tFi Amanillah!!!\n\n";
            return 0;
        }

    }


   return 0;
}



