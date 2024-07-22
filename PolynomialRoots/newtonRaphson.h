
float newtonRaphson(float x_0, float root, int number_of_iterations, float acceptable_iterative_approach)
{
    // ESTA FUNCAO RECEBE UM PONTO INICIAL E A PARTIR DELE BUSCA O ZERO DE UMA DADA FUNÇÃO
    int iteration = 0;
    float x_n, f, df, iterative_approach, erro;

    f = function_calc(x_0);
    df = derivative_function_calc(x_0);

    if (f <= acceptable_iterative_approach && f >= -acceptable_iterative_approach)
    {
        return x_0;
    }

    do
    {

        iteration++;

        if (df == 0)
        {
            printf("Erro ao buscar raiz devido a derivada ser igual a 0!");
            return 0;
        };

        x_n = x_0 - f / df;

        erro = root - x_n;
        iterative_approach = fabsf((x_n - x_0) / x_n);

        printf(" \titeration = %.3d |\terro de iteracao = %.10f |\terro = %.10f |\troot = %f |\tf(x) = %f \n", iteration, iterative_approach, erro, x_n, f);

        f = function_calc(x_n);
        df = derivative_function_calc(x_n);
        x_0 = x_n;

    } while (iteration < number_of_iterations && iterative_approach > acceptable_iterative_approach);

    return x_n;
}