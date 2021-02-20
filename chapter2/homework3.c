#include<stdio.h>
#define PI 3.14f

int main(void)
{
    float r, volume;
    printf("Enter the radius: ");
    scanf("%f", &r);
    volume = 4.0f / 3.0f * PI * r * r *r;
    printf("The ball's volume: %.1f\n", volume);
    return 0;
}