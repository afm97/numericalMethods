typedef double (*function)(double, double, double, double); // Objetivo disto é passar uma função como parâmetro para outra função

double derivative_function_x1(double x_1, double x_2, double x_3, double x_4, double h, function f)
{
    return (f(x_1 + h, x_2, x_3, x_4) - f(x_1, x_2, x_3, x_4)) / h;
}

double derivative_function_x2(double x_1, double x_2, double x_3, double x_4, double h, function f)
{
    return (f(x_1, x_2 + h, x_3, x_4) - f(x_1, x_2, x_3, x_4)) / h;
}

double derivative_function_x3(double x_1, double x_2, double x_3, double x_4, double h, function f)
{
    return (f(x_1, x_2, x_3 + h, x_4) - f(x_1, x_2, x_3, x_4)) / h;
}

double derivative_function_x4(double x_1, double x_2, double x_3, double x_4, double h, function f)
{
    return (f(x_1, x_2, x_3, x_4 + h) - f(x_1, x_2, x_3, x_4)) / h;
}