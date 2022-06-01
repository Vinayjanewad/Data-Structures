// C Program to find the area of circle using pointers
#include <stdio.h>
#include <stdlib.h>

void Area(float *p1, float *p2)
{
    *p2 = 3.14 * (*p1) * (*p1);
    printf("\nArea(in sq.cm)=%0.2f", *p2);
}

void main()
{
    float r, ar;
    float *p1, *p2;
    printf("Enter the radius of circle(in cm):");
    scanf("%f", &r);
    p1 = &r;
    p2 = &ar;
    Area(p1, p2);
}