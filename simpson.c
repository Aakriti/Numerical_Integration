#include "simpson.h"

void simpson (double a, double b, int steps, void (*f) (double in, double *out), double *result )
{
  double f_l, l, h;
  int i;

  if(steps%2 != 0)
    steps++;

  *result = 0.0;
  h = (b - a) / steps;

  (*f) (a, &f_l);
  *result += f_l; 

  (*f) (b, &f_l);
  *result += f_l; 

  l = a+h;

  for (i=0; l<b; i++)
  {
      (*f) (l, &f_l);

      if(i%2 == 0)
          *result += 4*f_l;
      else
          *result += 2*f_l;
      l += h;
  }

  *result = *result * h/3;
}
