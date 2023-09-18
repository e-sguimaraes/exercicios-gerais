#include <stdio.h>

int somaDigitos(int n) {
    if(n/10 == 0) return n;
return somaDigitos(n/10) + n%10;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", somaDigitos(n));
return 0;
}