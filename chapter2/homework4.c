#include<stdio.h>
#define TAX_RATE (5.0f / 100.0f)

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    amount = amount + amount * TAX_RATE;
    printf("With tax added: $%.2f\n", amount);
    return 0;
}