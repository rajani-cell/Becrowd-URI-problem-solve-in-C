#include <stdio.h>
#include<math.h>
 
int main() {
 
    int A,B,C,X;
    scanf("%d%d%d",&A,&B,&C);
    
    X=(A+B+abs(A-B))/2;
    X=(X+C+abs(X-C))/2;
    
    printf("%d eh o maior\n",X);
 
    return 0;
}
