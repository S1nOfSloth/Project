#include <stdio.h>
#include <string.h>

int main() {
    
    char name[100];
    char surname[100];
    char paternal_name[100];
    int year;
    char c = -112;
    char *result;

    FILE* inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Ошибка открытия исходного файла\n");
        return 0;
    }

    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Ошибка открытия файла для записи\n");
        return 0;
    }

    while (fscanf(inputFile, "%s %s %s %d", surname, name, paternal_name, &year) != EOF) {
        if (result = strchr(surname, c)) 
        {
            fprintf(outputFile, "%s %s %s %d\n", surname, name, paternal_name, year);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
