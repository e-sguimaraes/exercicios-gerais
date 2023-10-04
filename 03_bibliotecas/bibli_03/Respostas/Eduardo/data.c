#include <stdio.h>
#include "data.h"

int verificaDataValida(int dia, int mes, int ano) {
    if(ano >= 0) {
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            if(dia <= 31 && dia >= 1) return 1;
        }
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if(dia <= 30 && dia >= 1) return 1;
        }
        if(mes == 2) {
            if(dia <= 28 && dia >= 1) return 1;
        }
    }
return 0;
}

void imprimeMesExtenso(int mes) {
    switch(mes) {
        case 1:
            printf("Janeiro");
            break;

        case 2:
            printf("Fevereiro");
            break;
        
        case 3:
            printf("Marco");
            break;
        
        case 4:
            printf("Abril");
            break;

        case 5:
            printf("Maio");
            break;

        case 6:
            printf("Junho");
            break;

        case 7:
            printf("Julho");
            break;

        case 8:
            printf("Agosto");
            break;

        case 9:
            printf("Setembro");
            break;

        case 10:
            printf("Outubro");
            break;

        case 11:
            printf("Novembro");
            break;

        case 12:
            printf("Dezembro");
            break;

    }
}

void imprimeDataExtenso(int dia, int mes, int ano) {
    printf("%02d de ", dia);
    imprimeMesExtenso(mes);
    printf(" de %d\n", ano);
}

int verificaBissexto(int ano) {
return (ano%4 == 0 && ano%100 != 0) || ano%400 == 0;
}

int numeroDiasMes(int mes, int ano) {
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) return 31;
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11) return 30;
    if(verificaBissexto(ano)) return 29;
return 28;
}

int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    if(ano1 > ano2 || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2)) return 1;
    if(ano1 == ano2 && mes1 == mes2 && dia1 == dia2) return 0;
return -1;
}

int calculaDiasAteMes(int mes, int ano) {
    int dias = 0, i;
    for(i = 1; i <= mes; i++) {
        dias += numeroDiasMes(i, ano);
    }
return dias;
}

int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    int i = 0;
    if(comparaData(dia1, mes1, ano1, dia2, mes2, ano2) != -1) {
        while(ano1 != ano2 || mes1 != mes2 || dia1 != dia2) {
            if(numeroDiasMes(mes2, ano2) + 1 == dia2) {
                mes2++;
                dia2 = 1;
                if(mes2 == 13) {
                    ano2++;
                    mes2 = 1;
                }
            }
            if(ano1 == ano2 && mes1 == mes2 && dia1 == dia2) {
                return i;
            }
            dia2++;
            i++;
        }
    } else {
        while(ano1 != ano2 || mes1 != mes2 || dia1 != dia2) {
            if(numeroDiasMes(mes1, ano1) + 1 == dia1) {
                mes1++;
                dia1 = 1;
                if(mes1 == 13) {
                    ano1++;
                    mes1 = 1;
                }
            }
            if(ano1 == ano2 && mes1 == mes2 && dia1 == dia2) {
                return i;
            }
            dia1++;
            i++;
        }
    }
return i;
}