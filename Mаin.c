#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "mymath.h"

int value = 5;

void main( void )
{
  double x, xRad, sinRes, cosRes;
  int n;	

  printf("Main.C value: %i\n", value);
  printf("Math.C value: %i\n", getValue());

  printf("Input x: ");
  scanf("%lf", &x);

  printf("Input n: ");
  scanf("%d", &n);

  xRad = x * PI / 180;

  sinRes = MySin(xRad, 1 / power(10, 15));
  cosRes = MyCos(xRad, 1 / power(10, 15));

  printf("%f ^ %d is %f, sin(%f) is %.15f, cos(%f) is %.15f", x, n, power(x, n), x, sinRes, x, cosRes);

  getchar();
  getchar();
}