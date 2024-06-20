#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "printArray.h"
#include "printMatrix.h"
#include "norm.h"
#include "zeros.h"
#include "gaussSeidelMethod.h"
#include "jacobiMethod.h"
#include "srsMethod.h"

int main()
{

    double matrix[][5] = {{10, -1, 2, 0, 6},
                          {-1, 11, -1, 3, 25},
                          {2, -1, 10, -1, -11},
                          {0, 3, -1, 8, 15}};

    int rows = sizeof(matrix) / sizeof(matrix[0]);

    double solution[rows];
    zeros(rows, solution);

    // jacobiMethod(rows, 0.00001, matrix, solution, 50);
    gaussSeidelMethod(rows, 0.00001, matrix, solution, 50);
    // SRSMethod(rows, 0.001, matrix, solution, 50, 0.9);
}