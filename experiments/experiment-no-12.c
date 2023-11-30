#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int h, l, i;
  h = a[0], l = a[0]; 
  for (i = 0; i< 5; i++) {
    if (a[i] > h)
      h = a[i];
    if (a[i] < l)
      l = a[i];
  }

  printf("smallest int: %d\n", l);
  printf("largest int: %d", h);

}
