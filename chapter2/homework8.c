#include<stdio.h>

int main(void)
{
    float loan, rate, payment, first_month, second_month, third_month;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    first_month = loan * (rate / 100 / 12 + 1 ) - payment;
    second_month = first_month * (rate / 100 / 12 + 1) - payment;
    third_month = second_month * (rate / 100 / 12 + 1) -payment;
    printf("Balance remaining after first payment: $%.2f\n", first_month);
    printf("Balance remaining after second payment: $%.2f\n", second_month);
    printf("Balance remaining after third payment: $%.2f\n", third_month);
    return 0;
}