#include "trapezoidal.h"

void trapezoid (double a, double b, int steps, void (*f) (double in, double *out), double *result )
{
  double f_a, f_b, h, l1, l2;
  int i;
 
  steps++;

  *result = 0.0;
  h = (b - a) / steps;

  l1 = a;
  l2 = a+h;

  for (i=0; l1<b; i++)
  {
      (*f) (l1, &f_a);
      (*f) (l2, &f_b);
      *result += (f_a + f_b);
      l1 = l2;
      l2 += h;
  }

  *result = *result * h/2;
}
