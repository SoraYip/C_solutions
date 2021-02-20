#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num < 10) {
        printf("The number has one digit.\n");
    } else if (num >= 10 && num < 100) {
        printf("The number has two digits.\n");
    } else if (num >= 100 && num < 1000) {
        printf("The number has three digits.\n");
    } else if (num >= 1000 && num < 10000) {
        printf("The number has four digits.\n");
    } else {
        printf("The number is out range.\n");
    }

    return 0;
}