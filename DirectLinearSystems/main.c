#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "printMatrix.h"
#include "printArray.h"
#include "maxValuesOfMatrix.h"
#include "gaussianElimination.h"
#include "regressiveSubstitution.h"
#include "rowExchanger.h"
#include "partialPivotingScale.h"

int main()
{

    double matrix[][4] = {{2.11, -4.21, 0.921, 2.01},
                          {4.01, 10.2, -1.12, -3.09},
                          {1.09, 0.987, 0.832, 4.21}};

    // Sol: x1 = -0.431, x2 = 0.430, 5.12

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    double solution[rows];

    gaussianElimination(rows, matrix);
    regressiveSubstitution(rows, matrix, solution);
    printArray(rows, solution);
}