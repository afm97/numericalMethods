#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"
#include "derivative.h"
#include "bisection.h"
#include "secantModified.h"
#include "secant.h"
#include "newtonRaphson.h"

void main()
{

    int iterations = 100;
    // float root_bisection, root_np,a = -5.0,b = 0, root = -0.5, x0 = -5,acceptable_iterative_approach = 0.0001;
    float root_bisection, root_np, a = 0.0, b = 20, root = 10.816653826391969, x0 = 1, acceptable_iterative_approach = 0.00001;

    root_bisection = bisection(a, b, root, iterations, acceptable_iterative_approach);
    printf("\t---------------------------------------------------------------------------------------------------------------------------\n");
    root_np = newton_raphson(x0, root, iterations, acceptable_iterative_approach);
    printf("The root in the range a = %.2f and b = %.2f is %.5f\n", a, b, root_bisection);
    printf("The root with inicial shot x0 = %.2f is %.5f\n", x0, root_np);
}
