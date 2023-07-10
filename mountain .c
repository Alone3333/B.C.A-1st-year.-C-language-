#include <stdio.h>

void main(){

  int n, i, j, c, d;
  
  printf("enter value");
  scanf("%d",&n);

  for(i=0;i<n;i++)//outer loop array (row) 
    {
      for(j=0;j<n-i;j++)//inner loop (column) 
        {
        
          printf ("🗻");
        }
    
         printf ("\n");
      }

for(i=0;i<n;i++)//outer loop 
  {
    for(j=0;j<i;j++)//inner loop
      {
        printf("🗻");
      }
    printf("\n");
  }



for(i=0;i<n*2;i++) 
  {
    for (j=n;j<(n*2)-i;j++) 
    { 
      printf("🗻");
    }
    printf("\n");
  }
}

