#include<stdio.h>
#include<cs50.h>

int main()
{
 int p=get_int("Enter type of pattern (1 or 2) ");
 int r=get_int("Number of rows");
 int i,j;
 if (p==1)
 {
   for(i=r;i>0;i--)
   {
     for(j=0;j<i;j++)
     {
       printf("#");
     }
     printf("\n");
 }
}
 else if(p==2)
 {
   for(i=r;i>0;i--)
   {
     for(j=0;j<r;j++)
       {
         if(j>=i-1)
          printf("#");
         else
          printf(" ");
        }
       printf("\n");
    }
 }
 else
  printf("error");
 }
