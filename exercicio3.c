#include <stdio.h>

int divisaoInteira(int dividendo, int divisor) {
    int quociente = 0;
    
    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }
    
    return quociente;
}

int main() {
    int dividendo, divisor;
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    
    int quociente = divisaoInteira(dividendo, divisor);
    
    printf("O quociente da divisao inteira e: %d\n", quociente);
    
    return 0;
}