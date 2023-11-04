#include <stdio.h>

int max(int a, int b) {
  if (a > b)
    return a;
  return b;
}

int min(int a, int b) {
  if (a < b)
    return a;
  return b;
}

int main() {
  int a, b, c;

  printf("enter two numbers: ");
  scanf("%d %d", &a, &b);

  printf("enter 1 to find max, enter 2 to find min: ");
  scanf("%d", &c);

  switch (c) {
    case 1:
      printf("max number is: %d", max(a, b));
      break;
    case 2:
      printf("min number is: %d", min(a, b));
        break;
    }

}
