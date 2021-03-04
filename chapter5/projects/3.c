#include<stdio.h>

int main(void)
{
    float commission, rival, price, value;
    int count;

    printf("Enter price per share: ");
    scanf("%f", &price);
    printf("Enter the share of trade: ");
    scanf("%d", &count);

    value = price * count;

    if (value < 2500.00f) {
        commission = 30.00f + .017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }
    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("The commission is: $%.2f\n", commission);

    if (count < 2000) {
        rival = 33.00f + count * .03f;
    } else {
        rival = 33.00f + count * .02f; 
    }

    printf("The rival is: $%.2f\n", rival);
    
}