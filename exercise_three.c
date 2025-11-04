#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv) {
    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        int nthreads = omp_get_num_threads();
        printf("I am parallel (thread %d of %d)\n", tid, nthreads);
        printf("I am not parallel (thread %d of %d)\n", tid, nthreads);
    }

    printf("Outside parallel region: omp_get_num_threads() = %d\n", omp_get_num_threads());
    return 0;
}
