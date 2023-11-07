#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
   FILE *inputFile=fopen("input.txt","r");
   FILE *outputFile=fopen("output.txt","w");
   if(inputFile==NULL)
   {
       fprintf(outputFile,"File Not Found\n");
       return 0;
   }
   int n;
   fscanf(inputFile,"%d",&n);
   int sum=0;
   for(int i=0;i<n;i++)
   {
       int a;
       fscanf(inputFile,"%d",&a);
       sum+=a;
   }
   fprintf(outputFile,"Sum-> %d\n",sum);

    return 0;
}

