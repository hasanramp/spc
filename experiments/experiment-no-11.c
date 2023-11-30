#include <stdio.h>

int gcd(int l, int s) {
  if (l % s == 0) {
    return s;
  }
  return gcd(l, s - 1);
}

int main() {

  int a, b, l, s;
  printf("enter nums: ");
  scanf("%d %d", &a, &b);

  a > b ? (l = a, s = b) : (l = b, s = a);
  printf("gcd is: %d", gcd(l, s));
  
}
