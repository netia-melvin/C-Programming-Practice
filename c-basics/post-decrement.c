/*the value of "x" will be used in the expression and then it will be decreased by 1*/
#include <stdio.h>
int main() {
  int x = 50;
  int y = 10 + x--;
  printf("x = %d, y = %d\n", x, y);
  
   return 0;
}
