#include<stdio.h>

int print_biggest(int a, int b);
int main()
{
    int x=20,y=30;
    
    print_biggest(x,y);
    return 0;
}

int print_biggest(int a,int b)
{
   if(a>b)

printf("%d a is greater",a);

else
printf("%d b is greater",b);


}