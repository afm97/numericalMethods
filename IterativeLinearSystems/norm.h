double norm(unsigned int numberOfRows, double currentSolutionArray[numberOfRows], double previousSolutionArray[numberOfRows])
{
    double maxValueOfCurrent = 0, maxValueOfPrevious = 0, normOfArray;

    for (unsigned int i = 0; i < numberOfRows; i++)
    {
        if (fabs(currentSolutionArray[i]) > maxValueOfCurrent)
        {
            maxValueOfCurrent = fabs(currentSolutionArray[i]);
        }
    }

    for (unsigned int j = 0; j < numberOfRows; j++)
    {
        if (fabs(previousSolutionArray[j]) > maxValueOfPrevious)
        {
            maxValueOfPrevious = fabs(previousSolutionArray[j]);
        }
    }

    normOfArray = fabs(maxValueOfCurrent - maxValueOfPrevious) / maxValueOfCurrent;

    return normOfArray;
}