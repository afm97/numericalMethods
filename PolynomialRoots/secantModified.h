float secant_modified(float x_0, float h, float root, int number_of_iterations, float acceptable_iterative_approach){
    //RECEBE DOIS CHUTES INICIAIS, UMA TOLERÂNCIA E UM NUMERO MÁXIMO DE ITERAÇÕES
    // E RETORNA A RAIZ DA FUNÇÃO DENTRO DA TOLERÂNCIA ESTABELECIDA
    int iteration = 0;
    float error, x_1, iterative_approach, f_k, f_kh;

    f_k = function_calc(x_0); f_kh = function_calc(x_0 + h); 

    if (f_k <= acceptable_iterative_approach && f_k >= -acceptable_iterative_approach){
        return x_0;
    }

    do{
        iteration++;


        x_1 = x_0 - (h*f_k)/(f_kh - f_k);

        error = root - x_1;

        iterative_approach = fabsf((x_1 - x_0)/x_1);

        x_0 = x_1;

        f_k = function_calc(x_0); f_kh = function_calc(x_0 + h); 

        printf(" \titeration = %.3d |\terro de iteracao = %.10f |\terro = %.10f |\troot = %f |\tf(x) = %f \n", iteration,iterative_approach,error,x_1,f_k);


    } while (iteration <= number_of_iterations && iterative_approach >= acceptable_iterative_approach);
    
}