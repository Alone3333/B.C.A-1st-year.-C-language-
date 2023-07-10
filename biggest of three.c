#include<stdio.h>

int main()
{
 int a,b,c;

printf("enter first number ");
scanf("%d",&a);

printf("enter second number ");
scanf("%d",&b);

printf("enter third number");
scanf("%d",&c);

if(a>b && a>c)
{
  printf("%d is greater a",a);
}
else if(a<b && b>c)
{
printf("%d is greater b",b);
}
else

 printf("%d is greater",c);

return 0;
}