#include <stdio.h>

int main() {

  int a, b;
  char o;
  printf("enter operation: ");
  scanf("%c", &o);

  printf("enter nums: ");
  scanf("%d %d", &a, &b);


  switch(o) {
    case '+': printf("%d", a + b);
              break;
    case '-': printf("%d", a - b);
              break;
    case '*': printf("%d", a * b);
              break;
    case '/': printf("%d", a / b);
  }

}
