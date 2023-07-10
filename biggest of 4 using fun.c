#include<stdio.h>

int great(int a,int b,int c,int d);
int max_1(int x,int y);
int max_2(int x, int y);
int main()
{  
int a,b,c,d,n;

printf("enter intergers");
scanf("%d %d %d %d",&a,&b,&c,&d);

 n=great(a,b,c,d);
    printf("%d",n);
    return 0;
}

int great(int a,int b, int c, int d)
{

int x=max_1(a,b);
int y=max_2(c,d);

if(x>y)

return x;

else 

return y;
}

int max_1(int x,int y){
if(x>y)
return x;
else
return y;
}

int max_2(int x,int y){
if(x>y)
return x;
else
return y;

}