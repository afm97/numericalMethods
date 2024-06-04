#include <stdio.h>
#include <stdlib.h>
#include "dataFormat.h"
#include "printMatrix.h"
#include "zeros.h"
#include "functions.h"
#include "rungeKuttaSystems.h"
#include "eulerSystems.h"
#include "writeOutputToCSV.h"

void main()
{
    timeAndInitialConditions thisCase = {.timeStart = 0,
                                         .timeEnd = 5,
                                         .numberOfSteps = 1000000,
                                         .initialConditions = {0.1, 0.1, 0.1}};

    double **solution = (double **)malloc((thisCase.numberOfSteps + 1) * sizeof(double *));

    if (solution == NULL)
    {
        printf("Erro: Não foi possível alocar memória para solution.\n");
        exit(1);
    }

    for (int i = 0; i < thisCase.numberOfSteps + 1; i++)
    {
        solution[i] = (double *)malloc(4 * sizeof(double));
        if (solution[i] == NULL)
        {
            printf("Erro: Não foi possível alocar memória para solution[%d].\n", i);
            exit(1);
        }
    }

    zeros(thisCase.numberOfSteps, 4, solution); // Zerando a matriz

    solution[0][0] = thisCase.timeStart; // Atribuição do tempo na coluna 1 da matriz de solução
    for (unsigned int i = 1; i < 4; i++)
    {
        solution[0][i] = thisCase.initialConditions[i - 1]; // Atribuição das condições iniciais à matriz de solução
    }

    rungeKuttaSystem(thisCase.timeStart, thisCase.timeEnd, thisCase.numberOfSteps, solution);

    // eulerSystem(thisCase.timeStart, thisCase.timeEnd, thisCase.numberOfSteps, solution);

    writeOutputToCSV("case1.csv", thisCase.numberOfSteps, solution);

    // Liberar memória alocada dinamicamente
    for (unsigned int i = 0; i < thisCase.numberOfSteps + 1; i++)
    {
        free(solution[i]);
    }
    free(solution);

    // printMatrix(thisCase.numberOfSteps + 1, 4, solution);
}
