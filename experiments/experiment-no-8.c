#include <stdio.h>

int main() {

  int a, b;
  int s = 0, c = 0;
  int d = 100;
  //int c = 0;

  printf("enter num: ");
  scanf("%d", &a);

  while (a != 0) {
    b = a % 10;
    s += b;
    a = a / 10;
    c = c + b*d;
    d = d / 10;
  }
  printf("reversed num: %d\n", c);
  printf("sum of digits: %d", s);

}
