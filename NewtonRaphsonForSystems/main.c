#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dataFormat.h"
#include "gaussianElimination.h"
#include "transferValuesOfArrays.h"
#include "printArray.h"
#include "printMatrix.h"
#include "norm.h"
#include "derivatives.h"
#include "functions.h"
#include "jacobian.h"
#include "newtonRaphson.h"

int main()
{
    double matrix[4][4];

    int rows = sizeof(matrix) / sizeof(matrix[0]);

    dataConfig config = {.initialValues[0] = 0.1,
                         .initialValues[1] = 0.1,
                         .initialValues[2] = -0.1,
                         .initialValues[3] = 0.1,
                         .toleranceForDerivative = 0.0001,
                         .toleranceForIterations = 0.00001,
                         .numberMaxOfIterations = 500};

    double independentValues[rows];

    NewtonRaphson(rows,
                  matrix,
                  independentValues,
                  config.initialValues,
                  config.toleranceForDerivative,
                  config.toleranceForIterations,
                  config.numberMaxOfIterations);
}