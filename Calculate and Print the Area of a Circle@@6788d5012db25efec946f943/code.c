#include <stdio.h>
int main() {
    float radius;
    float Area;
    Area = (radius * radius) * 3.14;
    scanf("%f", &radius);
    printf("Area: %.2f",Area);
    return 0;
}