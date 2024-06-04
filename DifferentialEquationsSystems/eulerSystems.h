void eulerSystem(double timeStart, double timeEnd, int numberOfSteps, double(**solution))
{
    double step, t0, x0, y0, z0, currentTime = timeStart;

    unsigned int iterator = 1;

    step = (timeEnd - timeStart) / numberOfSteps;

    while (iterator <= numberOfSteps)
    {
        x0 = solution[iterator - 1][1];
        y0 = solution[iterator - 1][2];
        z0 = solution[iterator - 1][3];

        currentTime += step;

        solution[iterator][0] = currentTime;
        solution[iterator][1] = x0 + step * f1(currentTime, x0, y0, z0);
        solution[iterator][2] = y0 + step * f2(currentTime, x0, y0, z0);
        solution[iterator][3] = z0 + step * f3(currentTime, x0, y0, z0);

        iterator++;
    }
}