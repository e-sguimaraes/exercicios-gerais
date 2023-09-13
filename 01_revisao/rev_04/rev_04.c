#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, i = 0;
    scanf("%d", &octal);
    while(octal) {
        decimal += octal%8 * pow(10, i);
        octal /= 8;
        i++;
    }
    printf("%d", decimal);

return 0;
}