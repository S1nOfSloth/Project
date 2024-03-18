//main.c
#include <stdio.h>
#include "second.h"

int main()
{
    float a1, b1, c1;
    printf("Введите стороны треугольника: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    
    if (a1 < b1 + c1 && b1 < a1 + c1 && c1 < a1 + b1)
    {
        float P = Perimeter(a1, b1, c1);
        float A = Area(a1, b1, c1);
        printf("Периметр треугольника: %.2f\n", P);
        printf("Площадь треугольника: %.2f", A);
    }
    else
    {
        printf("Треугольника с данными сторонами не существует!");
    }

    return 0;
}
//second.h
#include <math.h>

float Perimeter(float a, float b, float c)
{
    return a+b+c;
}
float Area(float a, float b, float c)
{
    float p = (a+b+c)/2.;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
