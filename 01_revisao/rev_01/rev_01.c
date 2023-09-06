#include <stdio.h>
#include <math.h>

int AcertouAlvo(float xa, float ya, float ra, float xd, float yd, float rd) {
return rd + ra >= sqrt(pow(xa - xd, 2) + pow(ya - yd, 2));
}

int main() {
    float xa, ya, ra, xd, yd, rd;
    scanf("%f %f %f %f %f %f", &xa, &ya, &ra, &xd, &yd, &rd);
    if(AcertouAlvo(xa, ya, ra, xd, yd, rd)) {
        printf("ACERTOU");
    }
    else {
        printf("ERROU");
    }
return 0;
}