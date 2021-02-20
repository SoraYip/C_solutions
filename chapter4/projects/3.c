#include<stdio.h>

int main(void)
{
    int hundred, ten, one;

    printf("Enter a thiree-digit number: ");
    scanf("%1d%1d%1d", &hundred, &ten, &one);
    printf("The reversal is: %d%d%d\n", one, ten, hundred);

    return 0;
}