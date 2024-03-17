#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, perimeter, area, perimeter_0;
  printf("Введите стороны треугольника: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  if (a < b + c && b < a + c && c < a + b)
  {
    perimeter = a + b + c;
    perimeter_0 = perimeter / 2;
    printf("Периметр треугольника: %.2lf\n", perimeter);
    printf("Площадь треугольника: %.2lf", sqrt(perimeter_0*(perimeter_0 - a)*(perimeter_0 - b)*(perimeter_0 - c)));
  }
  else 
    printf("Треугольника с данными сторонами не существует.");
  return 0;
}
