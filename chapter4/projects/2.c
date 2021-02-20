#include<stdio.h>

int main(void)
{
    int digit;
    printf("Enter a three-digit number: ");
    scanf("%3d", &digit);
    printf("The reversal is: %d\n", 
        digit % 10 * 100 + digit / 10 % 10 * 10 + digit / 100);
    
    return 0;
}