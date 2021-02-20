#include<stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;
    printf("|%d|%5d|%-5d|%5.6d|\n", i, i, i, i);
    printf("|%11f|%10.3e|%10g|\n", x, x, x);
    return 0;
}