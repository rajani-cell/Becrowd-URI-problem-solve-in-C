#include <stdio.h>
#include<math.h>
 
int main() {
 
 double a,b,c;
 scanf("%lf%lf%lf",&a,&b,&c);
 double cal=(b*b)-(4*a*c);
 
 double r1,r2;
 
 if(a>0 && cal>=0)
 {
     r1=(-b+sqrt(cal))/(2*a);
     r2=(-b-sqrt(cal))/(2*a);
     
     printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
     
 }
 
 else
 {
     
     printf("Impossivel calcular\n");
 }
 
    return 0;
}
