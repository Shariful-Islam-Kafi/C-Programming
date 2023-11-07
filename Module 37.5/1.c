#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct Student
{
    char name[100];
    int mark;
    int roll;
    char section;
    int whichClass;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student ar[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %c %d",&ar[i].name,&ar[i].mark,&ar[i].roll,&ar[i].section,&ar[i].whichClass);

    }
    struct Student highest={ar[0].mark};
    struct Student lowest={ar[0].mark};
    for(int i=0;i<n;i++){

        if(ar[i].mark>highest.mark){
            highest=ar[i];
        }
        if(ar[i].mark<lowest.mark){
            lowest=ar[i];
        }
    }
        printf("Highest-> %s %d %d %c %d\nLowest-> %s %d %d %c %d\n",highest.name,highest.mark,highest.roll,highest.section,highest.whichClass,lowest.name,lowest.mark,lowest.roll,lowest.section,lowest.whichClass);




    return 0;
}



