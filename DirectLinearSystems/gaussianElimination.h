void maxValuesOfMatrix(unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1], double arrayOfMaxValues[numberOfRows]);
void partialPivotingScale(unsigned originRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1], double maxValuesOfMatrix[numberOfRows]);

void gaussianElimination(unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1])
{

	double arrayOfMaxValues[numberOfRows];
	maxValuesOfMatrix(numberOfRows, matrix, arrayOfMaxValues);

	double pivot = 0;

	for (int i = 0; i < numberOfRows - 1; i++)
	{
		partialPivotingScale(i, numberOfRows, matrix, arrayOfMaxValues);

		for (int j = i + 1; j < numberOfRows; j++)
		{
			pivot = matrix[j][i] / matrix[i][i];

			for (int k = 0; k < numberOfRows + 1; k++)
			{

				matrix[j][k] = matrix[j][k] - pivot * matrix[i][k];
			}
		}
	}
}