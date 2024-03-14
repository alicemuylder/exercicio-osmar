#include <stdio.h>

int calcularResto(int dividendo, int divisor){
   //printf("%d %d", dividendo, divisor);
   //return (0);
   
    while (dividendo >= divisor){
        dividendo -= divisor;
    }
    return (dividendo); //para mostrar o resto da divisao
}

int main(){
    int dividendo, divisor;
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d" , &divisor);
    
    if (divisor == 0){
        printf("Divisao por 0 nao e permitida");
    }else{
        int resto = calcularResto(dividendo, divisor);
        printf("O resto da divisao e %d", resto);
    }
    
return 0;

}