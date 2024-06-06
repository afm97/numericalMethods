
void regressiveSubstitution(unsigned int rows, double matrix[rows][rows + 1], double solution[rows])
{
    double sol_aux = 0;

    solution[rows - 1] = matrix[rows - 1][rows] / matrix[rows - 1][rows - 1]; // Primeira solução é manual e restante via somatório

    for (int i = rows - 2; i >= 0; i--)
    {
        for (int j = rows - 1; j > i; j--)
        {

            sol_aux += matrix[i][j] * solution[j];
        }

        solution[i] = (matrix[i][rows] - sol_aux) / matrix[i][i];

        sol_aux = 0;
    }
}