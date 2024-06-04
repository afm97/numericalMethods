void writeOutputToCSV(const char *filename, unsigned int numberOfSteps, double(**solution))
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // fprintf(file, "Time,Function_1,Function_2,Function_3\n");

    for (unsigned int i = 0; i <= numberOfSteps; i++)
    {
        fprintf(file, "%f,%f,%f,%f\n", solution[i][0], solution[i][1], solution[i][2], solution[i][3]); // Inserção do tempo e solução das três funções
    }

    fclose(file);

    printf("Dados gravados no arquivo '%s'.\n", filename);
}
