#include <stdio.h>
 
int main() {
 
  int N;
  scanf("%d",&N);
  
  int hour=N/3600;
  int x=N%3600;
  
  int minutes=x/60;
  int second=x%60;
  
  
  printf("%d:%d:%d\n",hour,minutes,second);
  
 
    return 0;
}
