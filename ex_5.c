#include <stdio.h>

int main(void)
{
    float x, polynomial;

    printf("Enter x value:\n");
    scanf("%f", &x);

    polynomial = ((((3*x + 2) * x -5)*x - 1)*x + 7)*x - 6;

    printf("Polynomial at %f: %f \n", x, polynomial);

    return 0;
    
}