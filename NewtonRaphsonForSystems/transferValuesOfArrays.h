void transferValuesOfArrays(unsigned int numberOfRows, double originMatrix[numberOfRows], double destination[numberOfRows])
{
    for (unsigned int i = 0; i < numberOfRows; i++)
    {
        destination[i] = originMatrix[i];
    }
}