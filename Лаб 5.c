#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    char z;
    printf("Введите размерность матриц:\n");
    scanf("%d", &n);
    double matrix_0[n][n];
    double matrix_1[n][n];
    
    printf("Введите значения элементов matrix_0:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%lf", &matrix_0[i][j]);
        }
    }
    
    printf("Введите значения элементов matrix_1:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%lf", &matrix_1[i][j]);
        }
    }
    
    printf("Введите операцию:\n"
            "1. Операция сложения '+'\n"
            "2. Операция вычитания '-'\n"
            "3. Оперция умножения '*'\n");
    scanf("%c", &z);
    
    switch(z){
    case '+':
        printf("e\n");
        break;
    case '-':
        printf("c\n");
        break;
    case '*':
        printf("wq\n");
        break;
    }
    
    return 0;
}
