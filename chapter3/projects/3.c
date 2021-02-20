#include<stdio.h>

int main(void)
{
    int gs1, lang, press, prod, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &lang, &press, &prod, &check);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", lang);
    printf("Publisher code: %d\n", press);
    printf("Item number: %d\n", prod);
    printf("Check digit: %d\n", check);

    return 0;
}