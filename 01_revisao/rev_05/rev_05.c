#include <stdio.h>

void leMapa(int l, int c, int mapa[l][c]) {
    int local;
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &local);
            mapa[i][j] = local;
        }
    }
}

int podeMover(char movimentacao, int l, int c, int mapa[l][c], int y, int x) {
    switch (movimentacao) {

        case 'C':
            if(mapa[y - 1][x] != 1 && y - 1 >= 0) {
                return 1;
            } else {
                return 0;
            }
            break;

        case 'B':
            if(mapa[y + 1][x] != 1 && y + 1 < l) {
                return 2;
            } else {
                return 0;
            }
            break;

        case 'D':
            if(mapa[y][x + 1] != 1 && x + 1 < c) {
                return 3;
            } else {
                return 0;
            }
            break;

        case 'E':
            if(mapa[y][x - 1] != 1 && x - 1 >= 0) {
                return 4;
            } else {
                return 0;
            }
            break;

    }

return 0;
}

int main() {
    int l, c, x, y, xf, yf, moveu = 1, i = 0, direcao;
    char prioridade[4];
    scanf("%d %d", &l, &c);
    int mapa[l][c];
    leMapa(l, c, mapa);

    scanf("%d %d %d %d", &y, &x, &yf, &xf);
    y--;
    x--;
    yf--;
    xf--;
    scanf("%s", prioridade);
    printf("(%d,%d) ", y + 1, x + 1);

    while(prioridade[i] != '\0' && (x != xf || y != yf)) {
        if(direcao = podeMover(prioridade[i], l, c, mapa, y, x)) {
            mapa[y][x] = 1;
            switch (direcao) {
                case 1:
                    y--;
                    break;

                case 2:
                    y++;
                    break;

                case 3:
                    x++;
                    break;

                case 4:
                    x--;
                    break;
            }
            printf("(%d,%d) ", y + 1, x + 1);
            i = 0;

        } else {
            i++;
        }
    }

return 0;
}