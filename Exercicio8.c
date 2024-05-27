#include <stdio.h>
#include <stdlib.h>
typedef struct No {
    int dado;
    struct No *prox;
} No;

No* novoNo(int dado) {
    No *novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória para o novo nó\n");
        exit(1);
    }
    novo->dado = dado;
    novo->prox = NULL;
    return novo;
}

void inserirNoFinal(No **cabeca, int dado) {
    No *novo = novoNo(dado);
    if (*cabeca == NULL) {
        *cabeca = novo;
    } else {
        No *temp = *cabeca;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
}

void imprimirLista(No *cabeca) {
    No *temp = cabeca;
    while (temp != NULL) {
        printf("%d -> ", temp->dado);
        temp = temp->prox;
    }
    printf("NULL\n");
}

No* concatenarListas(No *lista1, No *lista2) {
    if (lista1 == NULL) {
        return lista2;
    }
    No *temp = lista1;
    while (temp->prox != NULL) {
        temp = temp->prox;
    }
    temp->prox = lista2;
    return lista1;
}

void liberarLista(No *cabeca) {
    No *atual = cabeca;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }
}

int main() {
    No *lista1 = NULL;
    inserirNoFinal(&lista1, 1);
    inserirNoFinal(&lista1, 2);
    inserirNoFinal(&lista1, 3);

    No *lista2 = NULL;
    inserirNoFinal(&lista2, 4);
    inserirNoFinal(&lista2, 5);
    inserirNoFinal(&lista2, 6);

    printf("Lista 1: ");
    imprimirLista(lista1);
    printf("Lista 2: ");
    imprimirLista(lista2);

    lista1 = concatenarListas(lista1, lista2);

    printf("Lista concatenada: ");
    imprimirLista(lista1);

    liberarLista(lista1);

    return 0;
}
