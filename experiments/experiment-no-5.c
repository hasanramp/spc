#include <stdio.h>
#include <math.h>

void main() {
  float a, b, c, D, x1, x2;
  printf("Enter coefficients: ");
  scanf("%f %f %f", &a, &b, &c);

  D = b*b - 4*a*c;

  if (D == 0) {
    printf("roots are: %f %f", -b/2*a, -b/2*a);
  }else if(D > 0) {
    x1 = (-b +sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);
    printf("roots are: %f %f", x1, x2);
  }else {
    printf("no real roots");
  }
}
