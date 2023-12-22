#include <stdio.h>
 
int main() {
  int age;
  scanf("%d",&age);
  
  
  int year=age/365;
      age=age%365;
  int month=age/30;
  int date=age%30;
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,date);
 
    return 0;
}
