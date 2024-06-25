#include <math.h>

const double e = 2.7182818285;
const double pi = 3.14159265359;

double func1(double x_1, double x_2, double x_3, double x_4)
{

    return (3 * x_1 - cos(x_2 * x_3) - .5) + exp(-x_4);
}

double func2(double x_1, double x_2, double x_3, double x_4)
{
    return (pow(x_1, 2) - 81 * pow((x_2 + 0.1), 2) + sin(x_3) + 1.06 * cos(x_4));
}

double func3(double x_1, double x_2, double x_3, double x_4)
{
    return (pow(e, (-x_1 * x_2)) + 20 * x_3 + (10 * pi - 3) / 3) + tan(x_4);
}

double func4(double x_1, double x_2, double x_3, double x_4)
{

    return tan(x_1) * x_2 - exp(x_3 / 2) + cos(x_4);
}