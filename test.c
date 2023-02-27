#include<stdio.h>
#include<time.h>
#include"MatMul.h"

#define N (2048)

void generate_random_mat2d(double*** Mat, int size)
{
    (*Mat) = (double**)malloc(sizeof(double*) * size);
    for(int i = 0; i < size; i++)
    {
        (*Mat)[i] = (double*)malloc(sizeof(double) * size);
        for(int j = 0; j < size; j++)
            (*Mat)[i][j] = rand();
    }
}

int main()
{
    // double** Mat_a = (double**)malloc(sizeof(double*) * N);
    // double** Mat_b = (double**)malloc(sizeof(double*) * N);
    // double** Mat_c = (double**)malloc(sizeof(double*) * N);
    double** Mat_a;
    double** Mat_b;
    double** Mat_c;

    generate_random_mat2d(&Mat_a, N);
    generate_random_mat2d(&Mat_b, N);
    generate_random_mat2d(&Mat_c, N);

    double start = clock();
    simple_baseline(Mat_a, Mat_b, Mat_c, N);
    double time_cost = ((double) (clock() - start)) / CLOCKS_PER_SEC;

    printf("time used: %.7fs\n", time_cost);

    return 0;
}
