#include<stdio.h>

int main(void)
{
    int n1, n2, n3, n4, largest, smallest;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 > n2) {
        largest = n1;
        smallest = n2;
    } else {
        largest = n2;
        smallest = n1;
    }
    if (largest < n3) {
        largest = n3;
    }
    if (largest < n4) {
        largest = n4;
    }
    if (smallest > n3) {
        smallest = n3;
    }
    if (smallest > n4) {
        smallest = n4;
    }
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}