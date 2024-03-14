#include <stdio.h>

int main() {
    int num1, num2, i, resultado = 0;

    printf("Digite o primeiro número natural: ");
    scanf("%d", &num1);

    printf("Digite o segundo número natural: ");
    scanf("%d", &num2);

    for (i = 0; i < num2; i++) {
        resultado += num1;
    }

    printf("O produto de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}