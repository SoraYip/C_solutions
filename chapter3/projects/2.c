#include<stdio.h>

int main(void)
{
    int number, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\tUnit\t\tPurchase\n");
    printf("    \tPrice\t\tDate\n");
    printf("%-8d$%7.2f\t%.2d/%.2d/%d\n", number, price, month, day, year);

    return 0;
}