#include <stdio.h>

int tribonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
}

int main() {
    int n = 7;
    int resultado = tribonacci(n);
    printf("O %d-esimo termo da sequencia de Tribonacci e: %d\n", n, resultado);
    return 0;
}
