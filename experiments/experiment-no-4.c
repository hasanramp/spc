#include <stdio.h>

int main() {

  int a, k;
  k = 0;

  printf("enter num: ");
  scanf("%d", &a);

  while(a > 0) {
    
    k += a % 10;
    a = a / 10;
  }

  printf("%d", k);

}
