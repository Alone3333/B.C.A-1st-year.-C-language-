#include<stdio.h>

int sum(int , int);

int main()
{
 
int a,b;

printf("enter first digit");
scanf("%d",&a);

printf("enter second digit ");
scanf("%d",&b);

int c = a+b;

printf("sum of two didgit %d",c);

sum(a,b);
return 0;



}

int sum(int a,int b){
 
return a+b;


}