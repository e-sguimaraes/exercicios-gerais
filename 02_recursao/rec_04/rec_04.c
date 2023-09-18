#include <stdio.h>

int achaFinal(char * string) {
    int i;
    for(i = 0; string[i] != '\0'; i++);
return i;
}

int palindromo(char *string, int tamanho) {
    int i;
    tamanho--;
    for(i = 0; string[i] == '\0'; i++);
    if(string[i] != string[tamanho]) return 0;
    string[i] = '\0';
    string[tamanho] = '\0';
    if(string[tamanho] == '\0' && string[tamanho - 1] == '\0') {
        return 1;
    }
    else {
        return palindromo(string, tamanho);
    }
}

int main(){
    char string[50], tamanho;
    while(scanf("%50s", string) == 1) {
        tamanho = achaFinal(string);
        if(palindromo(string, tamanho)) {
            printf("SIM\n");
        }
        else {
            printf("NAO\n");
        }
    }
return 0;
}