#include "mymath.h"

const double PI = 3.1415926535897923284626;		

int getValue(void)
{
  return value;
}

double power(double a, int k)
{
  double res;

  if (k == 0)
	return 1;

  res = power(a, k / 2);

  res *= res;

  if (k % 2 == 1)
	res *= a;

  return res;
}

double MySin(double x, double E)
{
  double sum, an, n;
  sum = x;
  an = x;
  n = 0;

  while (an > E || an < -E)
  {
	an *= (-1) * x * x / ((2 * n + 2) * (2 * n + 3));
	sum += an;
	n++;
  }

  return sum;
}

double MyCos(double x, double E)
{
  double sum, an, n;
  sum = 1;
  an = 1;
  n = 1;

  while (an > E || an < -E)
  {
	an *= (-1) * x * x / ((2 * n - 1) * (2 * n));
	sum += an;
	n++;
  }

  return sum;
}

