float bisection(float a, float b, float root,int number_of_iterations, float acceptable_iterative_approach){
    //ESTA FUNCAO RECEBE UM INTERVALO DEFINIDO PELOS PONTOS A E B E DEVOLVE A RAIZ DA FUNCAO FORNECIDA
    int iteration = 0;
    float c, f_a, f_b, f_c, iterative_approach, erro;

    c = (a+b)/2;

    f_a = function_calc(a); f_b = function_calc(b); f_c = function_calc(c); 

    if (f_c <= acceptable_iterative_approach && f_c >= -acceptable_iterative_approach){
        return c;
    }

    do{

        iteration++;

        if (f_a*f_c < 0){
            b = c;
            f_b = function_calc(b); 
        }else{
            a = c;
            f_a = function_calc(a);
        }

        iterative_approach = fabsf((a - b)/c);
        erro = root - c;

        printf(" \titeration = %.3d |\terro de iteracao = %.10f |\terro = %.10f |\troot = %f |\tf(x) = %f \n", iteration,iterative_approach,erro,c,f_c);
        c = (a+b)/2;
        f_c = function_calc(c);
        
    }while (iteration < number_of_iterations && iterative_approach > acceptable_iterative_approach);
    
    return c;
}