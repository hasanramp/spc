#include <stdio.h>
#include <conio.h>

int main() {

  int a, i;
  printf("enter num: ");
  scanf("%d", &a);

  while (a != 0) {

    a = a/10;
    i ++;
  }

  printf("number of digits: %d", i);

}
