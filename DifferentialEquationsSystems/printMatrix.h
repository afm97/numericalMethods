void printMatrix(int rows, int cols, double matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("%f, %f, %f, %f\n", matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]);
    }
}