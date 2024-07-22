float secant(float x_0, float x_1, float root, int number_of_iterations, float acceptable_iterative_approach){
    /*RECEBE DOIS CHUTES INICIAIS, UMA TOLERÂNCIA E UM NUMERO MÁXIMO DE ITERAÇÕES
     E RETORNA A RAIZ DA FUNÇÃO DENTRO DA TOLERÂNCIA ESTABELECIDA */
    int iteration = 0;
    float error, x_2, iterative_approach, f_0, f_1;

    f_0 = function_calc(x_0); f_1 = function_calc(x_1); 

    if (f_0 <= acceptable_iterative_approach && f_0 >= -acceptable_iterative_approach){
        return x_0;
    } else if (f_1 <= acceptable_iterative_approach && f_1 >= -acceptable_iterative_approach){
        return x_1;
    }

    do{
        iteration++;

        x_2 = (f_1*x_0 - f_0*x_1)/(f_1 - f_0);

        error = root - x_2;

        iterative_approach = fabsf((x_2 - x_1)/x_2);

        x_0 = x_1; x_1 = x_2;
        f_0 = f_1; f_1 = function_calc(x_2);

        printf(" \titeration = %.3d |\terro de iteracao = %.10f |\terro = %.10f |\troot = %f |\tf(x) = %f \n", iteration,iterative_approach,error,x_2,f_1);


    } while (iteration <= number_of_iterations && iterative_approach >= acceptable_iterative_approach);
    
}