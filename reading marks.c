#include<stdio.h>

int main()
{ 

  int n[5],i;


    printf("enter marks ");
            for (i=0;i<5;i++)
            {
               scanf("%d ",&n[i]);
             }
            
            for(i=0;i<5;i++)
            {
               printf("marks shown is : %d \n",n[i]);
            }
    return 0;
}