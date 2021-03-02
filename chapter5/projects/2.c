#include<stdio.h>

int main(void)
{
    int h, m;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    printf("Equivalent 12-hour time: ");
    if (h == 0) {
        printf("%d:%d AM", 12, m);
    } else if (h < 12) {
        printf("%d:%d AM", h, m);
    } else if (h == 12) {
        printf("%d:%d PM", 12, m);
    } else {
        printf("%d:%d PM", h - 12, m);
    }
    printf("\n");
    
    return 0;
}