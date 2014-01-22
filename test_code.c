#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "trapezoidal.h"
#include "simpson.h"

/* Example showing the use of trapezoidal and simpson's rule for integration */


void fn (double in, double *out)
{
    /* f(x) = x^3 */
    //*out = in*in*in;
    *out = pow(in,3);
}

void fn_int (double in, double *out)
{
    /* f(x) = (1/4) x^4 */
    //*out = in*in*in*in*0.25;
    *out = 0.25 * pow(in,4);
}

int main (int argc, char *argv[])
{
    double a, b;
    int steps;

    if(argc < 4)
    {
        printf("usage: exec a b steps\n");
        return -1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    steps = atoi(argv[3]);

    double res1, res2, res3;

    fn_int(a, &res2);
    fn_int(b, &res1);
    res1 -= res2;

    trapezoid(a, b, steps, fn, &res2);
    simpson(a, b, steps, fn, &res3);

    printf("Comparison\nActual: %g\nTrapezoidal: %g\nSimpson: %g\n\n", res1, res2, res3);
    return 0;  
}
