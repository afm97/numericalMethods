// Definir as funções f1(x, y1, y2, y3), f2(x, y1, y2, y3) e f3(x, y1, y2, y3)
double f1(double x, double y1, double y2, double y3)
{
    return -0.5 * y1 + 0.1 * y2 + 0.2 * y3; // Exemplo: y' = -0.5*y1 + 0.1*y2 + 0.2*y3
}

double f2(double x, double y1, double y2, double y3)
{
    return 0.3 * y1 - 0.6 * y2 + 0.4 * y3; // Exemplo: y' = 0.3*y1 - 0.6*y2 + 0.4*y3
}

double f3(double x, double y1, double y2, double y3)
{
    return 0.2 * y1 + 0.5 * y2 - 0.8 * y3; // Exemplo: y' = 0.2*y1 + 0.5*y2 - 0.8*y3
}