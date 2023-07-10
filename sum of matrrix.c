#include<stdio.h>
#define SIZE 2
int main()
{
int i,j;
int a[SIZE][SIZE],b[SIZE][SIZE];

printf("enter matrix elements \n");
 for(i=0;i<SIZE;i++)
 {
   for(j=0;j<SIZE;j++)
   {
    scanf("%d",&a[i][j]);
    }
    printf("\n");
 }

printf("enter second matrix elements \n");
for(i=0;i<SIZE;i++)
 {
   for(j=0;j<SIZE;j++)
   {
    scanf("%d",&b[i][j]);
    }
    printf("\n");
 }

printf("sum of matrix \n");
for(i=0;i<SIZE;i++)
 {
   for(j=0;j<SIZE;j++)
   {
    printf(" %d",a[i][j]+b[i][j]);
    }
    printf("\n"); 
 }
return 0;
}