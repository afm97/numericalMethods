void printArray(unsigned int rows, double array[rows]);

void gaussianElimination(unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows], double independentValues[numberOfRows])
{

	double pivot = 0.0;

	for (int i = 0; i < numberOfRows - 1; i++)
	{

		for (int j = i + 1; j < numberOfRows; j++)
		{
			pivot = matrix[j][i] / matrix[i][i];

			for (int k = 0; k < numberOfRows + 1; k++)
			{

				matrix[j][k] = matrix[j][k] - pivot * matrix[i][k];
			}
			// 1.199950 2.185837 -8.422445
			independentValues[j] = independentValues[j] - pivot * independentValues[i];
		}
	}

	double sol_aux;

	independentValues[numberOfRows - 1] = independentValues[numberOfRows - 1] / matrix[numberOfRows - 1][numberOfRows - 1]; // Primeira solução é manual e restante via somatório
	for (int i = numberOfRows - 2; i >= 0; i--)
	{
		sol_aux = 0.0;
		for (int j = numberOfRows - 1; j > i; j--)
		{

			sol_aux += matrix[i][j] * independentValues[j];
		}
		independentValues[i] = (independentValues[i] - sol_aux) / matrix[i][i];
	}
}