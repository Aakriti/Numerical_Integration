#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{
    double i, j;
    double x_0 = -5, y_0 = -3, x_1 = 3, y_1 = 3;
    double x_step = 0.01, y_step = 0.01;
    double z_re, z_im, abs;

    for (i = x_0; i <= x_1; i += x_step)
    {
        for (j = y_0; j <= y_1; j += y_step)
        {
            z_re = 1 + i;
            z_im = j;

            abs = sqrt(z_re * z_re + z_im * z_im);

            if (abs < 1)
                printf("%.3g\t%.3g\t0\n", i, j);
            else if (abs == 1)
                printf("%.3g\t%.3g\t1\n", i, j);
            else
                printf("%.3g\t%.3g\t2\n", i, j);
        }
    }
}
