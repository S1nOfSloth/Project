int main()
{
    int x, y;
    int i, j;
    double main_diagonal = 0;
    double side_diagonal = 0;
    printf("Введите размерность матрицы:\n");
    scanf("%d %d", &x, &y);
    double matrix[x][y];
    
    printf("Введите значения элементов матрицы i x j:\n");
      for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
          scanf("%lf", &matrix[i][j]);
          if (i == j){
            main_diagonal += matrix[i][j];
          }
          if (j == x - i - 1){
            side_diagonal += matrix[i][j];
          }     
        }
      }
    printf("Матрица:\n");
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            printf("%.0lf ", matrix[i][j]);
        
        }
        printf("\n");
    }
    printf("Сумма элементов на главной диагонали: %.1lf\n", main_diagonal);
    printf("Сумма элементов на побочной диагонали: %.1lf\n", side_diagonal);
    
    int matrix_1[2][2];
    printf("Введите значения элементов матрицы 2 на 2:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
          scanf("%d", &matrix_1[i][j]);
        }
      }
    printf("Квадрат матрицы:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
          printf("%d ", matrix_1[i][j] * matrix_1[i][j]);
        }
      }
    return 0;
}
