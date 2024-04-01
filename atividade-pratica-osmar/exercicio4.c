#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int i, j, aux;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[10]; 
    int tamanho, i;

    printf("Digite o tamanho do vetor (até 10 elementos): ");
    scanf("%d", &tamanho);

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tamanho);

    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}