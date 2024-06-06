
void partialPivotingScale(unsigned originRow, unsigned int numberOfRows, double matrix[numberOfRows][numberOfRows + 1], double maxValuesOfMatrix[numberOfRows])
{

    double valueIndexArraySuport[2] = {fabs(matrix[originRow][originRow]) / maxValuesOfMatrix[originRow], originRow};
    double currentValue;

    for (unsigned int i = originRow + 1; i < numberOfRows; i++)
    {
        currentValue = fabs(matrix[i][originRow]) / maxValuesOfMatrix[i];
        if (currentValue > valueIndexArraySuport[0])
        {
            valueIndexArraySuport[0] = currentValue;
            valueIndexArraySuport[1] = i;
        }
    }
    rowExchanger(originRow, valueIndexArraySuport[1], numberOfRows, matrix);
}