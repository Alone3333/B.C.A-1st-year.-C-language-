#include<stdio.h>

int main()
{

int n=10,i,next=1,pre=0;

for(i=0;i<n;i++){
    
    
    int curr =pre+next;
    pre=next;
    next=curr;
    
    printf("%d ",curr);
    
     
    
    }
    return 0;
}