#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dot(const int *a, const int *b, const int size)
{
    if (a == NULL || b == NULL || size <= 0)
    {
        return -1.0;
    }

    double result = 0.0;
    for (int i = 0; i < size; i++)
    {
        result += (double)a[i] * b[i];
    }
    return result;
}

double length(const int *a, const int size)
{
    if (a == NULL || size <= 0)
    {
        return -1.0;
    }

    double dot_product = dot(a, a, size);
    if (dot_product < 0)
    {
        return -1.0;
    }

    return sqrt(dot_product);
}

int main()
{
    int size = 3;
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    double dot_prod_result = dot(a, b, size);
    printf("dot product: %f\n", dot_prod_result);
    double a_length = length(a, size);
    printf("Length of a: %f\n", a_length);

    return 0;
}
