#ifndef _TRAPEZIODAL_INC_
#define _TRAPEZIODAL_INC_

/*
* Refer Trapezoidal Rule for approximating definite integrals for explanation.
*/

void trapezoid (double a, double b, int steps, void (*f) (double in, double *out), double *result );

#endif
