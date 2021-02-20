#include<stdio.h>

int main(void)
{
    float x, v;
    printf("Enter the nubmer of x: ");
    scanf("%f", &x);
    v = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("The value: %.2f\n", v);
    return 0;
}