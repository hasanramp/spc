#include <stdio.h>

int main() {

/*
for the pattern:
1
21
321
4321
54321
*/
  int a = 1, i;

  for (i = 1; i <= 6; i++) {
    while (a != 0) {
      printf("%d", a);
      a--;
    }
    printf("\n");
    a = i;
  }

/*
for the pattern:
      A
     ABA
    ABCDCBA
   ABCDEDCBA
*/
  int j, m = 0;

  for (i = 1; i < 6; i++) {
    a = 65;
    for (j = 5 - i; j > 0; j--) {
      printf(" ");
    }
    for (j = 0; j < i + 1*m; j++) {
      printf("%c", a);
      if (m == 0) {
        a = a;
      }else if( j < m) {
        a++;
      }else {
        a--;
      }
    }
    for (j = 5 - i; j > 0; j--) {
      printf(" ");
    }
    printf("\n");
    m++;
  }
}
