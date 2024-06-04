void rungeKuttaSystem(double timeStart, double timeEnd, int numberOfSteps, double(**solution))
{
    double K1[3], K2[3], K3[3], K4[3];

    double step, x0, y0, z0, currentTime = timeStart;

    step = (timeEnd - timeStart) / numberOfSteps;

    for (unsigned int iterator = 1; iterator <= numberOfSteps; iterator++)
    {
        x0 = solution[iterator - 1][1];
        y0 = solution[iterator - 1][2];
        z0 = solution[iterator - 1][3];

        currentTime += step;

        K1[0] = step * f1(currentTime, x0, y0, z0);
        K1[1] = step * f2(currentTime, x0, y0, z0);
        K1[2] = step * f3(currentTime, x0, y0, z0);

        K2[0] = step * f1(currentTime + step / 2, x0 + K1[0] / 2, y0 + K1[1] / 2, z0 + K1[2] / 2);
        K2[1] = step * f2(currentTime + step / 2, x0 + K1[0] / 2, y0 + K1[1] / 2, z0 + K1[2] / 2);
        K2[2] = step * f3(currentTime + step / 2, x0 + K1[0] / 2, y0 + K1[1] / 2, z0 + K1[2] / 2);

        K3[0] = step * f1(currentTime + step / 2, x0 + K2[0] / 2, y0 + K2[1] / 2, z0 + K2[2] / 2);
        K3[1] = step * f2(currentTime + step / 2, x0 + K2[0] / 2, y0 + K2[1] / 2, z0 + K2[2] / 2);
        K3[2] = step * f3(currentTime + step / 2, x0 + K2[0] / 2, y0 + K2[1] / 2, z0 + K2[2] / 2);

        K4[0] = step * f1(currentTime + step, x0 + K3[0], y0 + K3[1], z0 + K3[2]);
        K4[1] = step * f2(currentTime + step, x0 + K3[0], y0 + K3[1], z0 + K3[2]);
        K4[2] = step * f3(currentTime + step, x0 + K3[0], y0 + K3[1], z0 + K3[2]);

        solution[iterator][0] = currentTime;
        solution[iterator][1] = x0 + (K1[0] + 2 * K2[0] + 2 * K3[0] + K4[0]) / 6;
        solution[iterator][2] = y0 + (K1[1] + 2 * K2[1] + 2 * K3[1] + K4[1]) / 6;
        solution[iterator][3] = z0 + (K1[2] + 2 * K2[2] + 2 * K3[2] + K4[2]) / 6;
    }
}
