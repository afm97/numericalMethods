
double jacobian(double x_1, double x_2, double x_3, double x_4, double h, double matrix[4][4])
{
    matrix[0][0] = derivative_function_x1(x_1, x_2, x_3, x_4, h, func1);
    matrix[0][1] = derivative_function_x2(x_1, x_2, x_3, x_4, h, func1);
    matrix[0][2] = derivative_function_x3(x_1, x_2, x_3, x_4, h, func1);
    matrix[0][3] = derivative_function_x4(x_1, x_2, x_3, x_4, h, func1);

    matrix[1][0] = derivative_function_x1(x_1, x_2, x_3, x_4, h, func2);
    matrix[1][1] = derivative_function_x2(x_1, x_2, x_3, x_4, h, func2);
    matrix[1][2] = derivative_function_x3(x_1, x_2, x_3, x_4, h, func2);
    matrix[1][3] = derivative_function_x4(x_1, x_2, x_3, x_4, h, func2);

    matrix[2][0] = derivative_function_x1(x_1, x_2, x_3, x_4, h, func3);
    matrix[2][1] = derivative_function_x2(x_1, x_2, x_3, x_4, h, func3);
    matrix[2][2] = derivative_function_x3(x_1, x_2, x_3, x_4, h, func3);
    matrix[2][3] = derivative_function_x4(x_1, x_2, x_3, x_4, h, func3);

    matrix[3][0] = derivative_function_x1(x_1, x_2, x_3, x_4, h, func4);
    matrix[3][1] = derivative_function_x2(x_1, x_2, x_3, x_4, h, func4);
    matrix[3][2] = derivative_function_x3(x_1, x_2, x_3, x_4, h, func4);
    matrix[3][3] = derivative_function_x4(x_1, x_2, x_3, x_4, h, func4);
}