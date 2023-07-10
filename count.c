#include<stdio.h>
#include<stdlib.h>

int main()
{

int n;
char ch;

scanf("%d",&n);

if(n==0){
printf("error");
exit(1);
}


if(n<9){

   switch(n)
           {
        
        case 1:
        printf("one");
        break;
        
        
        case 2:
        printf("two");
        break;
        
        
        case 3:
        printf("three");
        break;
        
        
        case 4:
        printf("four");
        break;
        
        
        case 5:
        printf("five");
        break;
        
        
        case 6:
        printf("six");
        break;
        
        
        case 7:
        printf("seven");
        break;
        
        
        case 8:
        printf("eight");
        break;

              }
}

else 

{
printf("greater then 9");
}
return 0;
}