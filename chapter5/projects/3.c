#include<stdio.h>

int main(void)
{
    float commission, price, value;
    int count;

    printf("Enter price per share: ");
    scanf("%f", &price);
    printf("Enter the share of trade: ");
    scanf("%d", &count);

    value = price * count;

    if (value < 2500.00f) {
        
    }
}