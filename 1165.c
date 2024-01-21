#include <stdio.h>
 
int main() {
 
int x,n;
scanf("%d",&n);

for(int j=0;j<n;j++)
{
scanf("%d",&x);

int count=0;

for(int i=2;i<x;i++)
{
    if(x%i==0)
    {
    count++;
    break;
    }
}

if(count==0)
{
      printf("%d eh primo\n",x); 
    
    
}
else
{
     printf("%d nao eh primo\n",x);
    
}
}
 
    return 0;
}
