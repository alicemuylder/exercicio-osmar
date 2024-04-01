#include <stdio.h>

void preencherMatrizIdentidade(int matriz[][3], int ordem) {
    if (ordem > 3) {
        printf("Erro: a ordem da matriz excede o limite permitido.\n");
        return;
    }

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void imprimirMatriz(int matriz[][3], int ordem) {
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int ordem;
    printf("Digite a ordem da matriz quadrada (max 3): ");
    scanf("%d", &ordem);

    int matriz[3][3];
    preencherMatrizIdentidade(matriz, ordem);
    printf("Matriz identidade de ordem %d:\n", ordem);
    imprimirMatriz(matriz, ordem);

    return 0;
}