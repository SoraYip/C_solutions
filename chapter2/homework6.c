#include<stdio.h>

int main(void)
{
    float x, v;
    printf("Enter value of x: ");
    scanf("%f", &x);
    v = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The value: %.2f\n", v);
    return 0;
}