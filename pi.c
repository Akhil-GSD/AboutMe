#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc !=2) {
        printf("usage: %s <number of iterations>\n", argv[0]);
        return 1;
    }
    int iterations = atoi(argv[1]);
    double sum_series = 0.0;
    int sign = 1;

    for (int i=0; i< iterations; i++) {
        double term = (double)sign / (2.0*i+1.0);
        sum_series += term;
        sign *= -1;
    }

    double pi_approx = 4.0 * sum_series;
    printf("Approximation of pi after %d iterations: %lf\n", iterations, pi_approx);
    return 0;
}