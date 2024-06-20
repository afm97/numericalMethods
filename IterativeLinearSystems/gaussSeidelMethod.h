void gaussSeidelMethod(unsigned int numberOfRows, double tolerance, double matrix[numberOfRows][numberOfRows + 1], double solution[numberOfRows], unsigned int numberMaxOfIterations)
{
    unsigned int counter = 0;
    double normOfArray, sumOfLine;
    double auxArray[numberOfRows];

    zeros(numberOfRows, auxArray);

    do
    {
        counter++;
        for (unsigned int i = 0; i < numberOfRows; i++)
        {
            sumOfLine = 0.0;
            for (unsigned int j = 0; j < numberOfRows; j++)
            {
                if (i == j)
                {
                    continue;
                }
                sumOfLine += matrix[i][j] * solution[j];
            }

            solution[i] = (matrix[i][numberOfRows] - sumOfLine) / matrix[i][i];
        }

        normOfArray = norm(numberOfRows, solution, auxArray);

        // printf("%f\n", normOfArray);

        for (unsigned int k = 0; k < numberOfRows; k++)
        {
            auxArray[k] = solution[k];
        }

        printArray(numberOfRows, solution);
    } while (normOfArray > tolerance && counter < numberMaxOfIterations);
}