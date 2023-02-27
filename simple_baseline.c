#include<stdio.h>
#include"MatMul.h"

void simple_baseline(double** Mat_A, double ** Mat_B, double** Mat_C, int N)
{
    // a simple version of mat mul using 3 layers loop.
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
        {
            Mat_A[i][j] = 0; 
            for (int k = 0; k < N; k++)
                Mat_A[i][j] += Mat_B[i][k] * Mat_C[k][j];
        }
}