void NewtonRaphson(unsigned int numberOfRows,
                   double matrix[numberOfRows][numberOfRows],
                   double independentValues[numberOfRows],
                   double initialValues[numberOfRows],
                   double h,
                   double tolerance,
                   unsigned int numberMaxOfIterations)
{
    unsigned int counter = 0;
    double normOfArray;

    do
    {
        counter++;

        jacobian(initialValues[0], initialValues[1], initialValues[2], initialValues[3], h, matrix);

        independentValues[0] = -func1(initialValues[0], initialValues[1], initialValues[2], initialValues[3]);
        independentValues[1] = -func2(initialValues[0], initialValues[1], initialValues[2], initialValues[3]);
        independentValues[2] = -func3(initialValues[0], initialValues[1], initialValues[2], initialValues[3]);
        independentValues[3] = -func4(initialValues[0], initialValues[1], initialValues[2], initialValues[3]);

        gaussianElimination(numberOfRows, matrix, independentValues);

        for (unsigned int i = 0; i < numberOfRows; i++)
        {
            independentValues[i] += initialValues[i];
        }

        normOfArray = norm(numberOfRows, independentValues, initialValues);
        printArray(numberOfRows, initialValues);
        transferValuesOfArrays(numberOfRows, independentValues, initialValues);

    } while (normOfArray > tolerance && counter <= numberMaxOfIterations);
}