
#define MAX 100 
typedef struct {
    int itens[MAX];
    int frente, tras, tamanho;
} FilaCircular;
void inicializaFila(FilaCircular *f) {
    f->frente = 0;
    f->tras = -1;
    f->tamanho = 0;
}
void imprimeFila(FilaCircular *f) {
    if (filaVazia(f)) {
        printf("Fila vazia\n");
        return;
    }
    int i, idx = f->frente;
    for (i = 0; i < f->tamanho; i++) {
        printf("%d ", f->itens[idx]);
        idx = (idx + 1) % MAX;
    }
    printf("\n");
}
FilaCircular concatenaFilas(FilaCircular *f1, FilaCircular *f2) {
    FilaCircular novaFila;
    inicializaFila(&novaFila);
    
    int i, idx = f1->frente;
    for (i = 0; i < f1->tamanho; i++) {
        enfileira(&novaFila, f1->itens[idx]);
        idx = (idx + 1) % MAX;
    }
    idx = f2->frente;
    for (i = 0; i < f2->tamanho; i++) {
        enfileira(&novaFila, f2->itens[idx]);
        idx = (idx + 1) % MAX;
    }
    return novaFila;
}

int main() {
    FilaCircular fila1, fila2, filaConcatenada;

    inicializaFila(&fila1);
    inicializaFila(&fila2);

    enfileira(&fila1, 1);
    enfileira(&fila1, 2);
    enfileira(&fila1, 3);

    enfileira(&fila2, 4);
    enfileira(&fila2, 5);
    enfileira(&fila2, 6);

    printf("Fila 1: ");
    imprimeFila(&fila1);
    printf("Fila 2: ");
    imprimeFila(&fila2);

    filaConcatenada = concatenaFilas(&fila1, &fila2);

    printf("Fila concatenada: ");
    imprimeFila(&filaConcatenada);

    return 0;
}