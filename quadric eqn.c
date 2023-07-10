#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,x,y;

printf("enter the value of abc");
scanf("%f %f %f",&a,&b,&c);

d=b*b-4*a*c;

if(d<0)
{
printf("roots are imaginary");
} 
else
 {
 x=-b+sqrt(d)/2*a;
  y=b+sqrt(d)/2*a;

printf("the value of x and y : %f %f ",x,y);
}

return 0;
 
}