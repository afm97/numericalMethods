
void maxValuesOfMatrix(unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1], double arrayOfMaxValues[numberOfRows])
{
    double maxValueOfLine = 0.0;

    for (unsigned int i = 0; i < numberOfRows; i++)
    {
        for (unsigned int j = 0; j < numberOfRows; j++)
        {
            if (fabs(matrix[i][j]) > maxValueOfLine)
            {
                maxValueOfLine = fabs(matrix[i][j]);
            }
        }
        arrayOfMaxValues[i] = maxValueOfLine;
        maxValueOfLine = 0.0;
    }
}