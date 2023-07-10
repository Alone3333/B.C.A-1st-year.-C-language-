#include<stdio.h>

int main()
{ int a[10],b,n,c, avg=0;

scanf("%d",&n);

  for(int i=0;i<n;i++) 
{
 scanf("%d ",&a[i]);
  }

for(int i=0;i<n;i++) 
{
  b=b+a[i];
}
  
avg = b/n;
printf("%d",avg);

    return 0;
}