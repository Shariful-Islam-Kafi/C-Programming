#include<stdio.h>
#include<stdbool.h>

struct Student
{
    int roll;
    int clas_s;
    int marks;
};
struct Unique_Student
{
    int roll;
    int clas_s;
    int total;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[n];
    struct Unique_Student unique_students[n];

    int k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&students[i].roll,&students[i].clas_s,&students[i].marks);
        bool found=false;
        for(int j=0;j<k;j++)
        {
            if(unique_students[j].roll==students[i].roll)
            {
                unique_students[j].total+=students[i].marks;
                found=true;
            }
        }
        if(found==false)
        {
            unique_students[k].roll=students[i].roll;
            unique_students[k].clas_s=students[i].clas_s;
            unique_students[k].total=students[i].marks;
            k++;
        }
    }
    for(int i=0;i<k;i++){
        printf("%d %d %d\n",unique_students[i].roll,unique_students[i].clas_s,unique_students[i].total);
    }






    return 0;
}




