#include<stdio.h>
#include<conio.h>


void printTable(int n);
void printgoodbye();

void main()
{
int n;

printf("enter table number ");
scanf("%d",&n);

printTable(n);
 

}

void printTable(int n)
{

for(int i=1;i<=10;i++)

printf(" %d\n ",n*i);

}

void printgoodbye(){

printf("good bye \n ");

}