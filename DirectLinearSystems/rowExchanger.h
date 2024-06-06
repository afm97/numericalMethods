
void rowExchanger(unsigned int originRow, unsigned targetRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1])
{
    double valueOfMatrix;

    for (unsigned int i = 0; i < numberOfRows + 1; i++)
    {
        valueOfMatrix = matrix[targetRow][i];
        matrix[targetRow][i] = matrix[originRow][i];
        matrix[originRow][i] = valueOfMatrix;
    }
}