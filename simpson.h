#ifndef _SIMPSON_INC_
#define _SIMPSON_INC_

/*
* Refer Simpson's Rule for approximating definite integrals for explanation.
*/

void simpson (double a, double b, int steps, void (*f) (double in, double *out), double *result );

#endif
