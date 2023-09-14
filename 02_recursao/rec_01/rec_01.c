#include <stdio.h>
#include <string.h>

void ImprimeInvertido(char * string) {
    int i;
    for(i = 0; string[i] != '\0'; i++);
    while(i > 0) {
        printf("%c", string[i - 1]);
        string[i - 1] = '\0';
        ImprimeInvertido(string);
        break;
    }
}

int main() {
    char string[1000];

    while(scanf("%1000s", string) == 1) {
        ImprimeInvertido(string);
        printf(" ");
    }

return 0;
}