#include <stdio.h>
//exercico funcao recursiva

int calcular(int n){
    if (n == 0)
    return (1);
    return n* calcular(n-1);
}

int main(){
    int numero;
    printf("Digite um numero natutal: ");
    scanf("%d" , &numero);
        int resultado = calcular(numero);
        printf("O fatorial e %d", resultado);

    return 0; 

}