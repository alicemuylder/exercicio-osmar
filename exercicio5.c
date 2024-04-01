#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *obterFracaoString(const char *origem, int tamanho) {
    if (tamanho < 0) {
        printf("Erro: tamanho inválido.\n");
        return NULL;
    }
    char *fracao = (char *)malloc((tamanho + 1) * sizeof(char)); 

    if (fracao == NULL) {
        printf("Erro: falha ao alocar memória.\n");
        return NULL;
    }
    strncpy(fracao, origem, tamanho);
    fracao[tamanho] = '\0'; 

    return fracao;
}

int main() {
    char stringOriginal[100];
    int tamanhoNovaString;

    printf("Digite uma string: ");
    fgets(stringOriginal, sizeof(stringOriginal), stdin);
    stringOriginal[strcspn(stringOriginal, "\n")] = '\0'; 

    printf("Digite o tamanho da nova string desejada: ");
    scanf("%d", &tamanhoNovaString);

    char *novaString = obterFracaoString(stringOriginal, tamanhoNovaString);

    if (novaString != NULL) {
        printf("Nova string: %s\n", novaString);
        free(novaString); 
    }

    return 0;
}
