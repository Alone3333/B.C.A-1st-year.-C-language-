#include<stdio.h>
//tempature into celsius

int main()
{
  float n;
  
  printf("enter temp ");
  scanf("%f",&n);
  
  float c =((n-32)*5)/9;
  
  printf("%f",c);
  
  return 0;
  
}
 