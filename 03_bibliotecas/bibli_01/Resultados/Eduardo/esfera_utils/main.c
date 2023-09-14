#include <stdio.h>
#include "esfera_utils.h"

int main() {
    float R, area, volume;
    scanf("%f", &R);
    printf("Area: %.2f\n", area = calcula_area(R));
    printf("Volume: %.2f\n", volume = calcula_volume(R));
return 0;
}