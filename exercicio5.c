#include <stdio.h>

    int suc(int n) {
    return n + 1;
    }

    int pred(int n) {
        if(n == 0)
            return 0;
        else
            return n -1;
    }

    int soma(int a, int b){
        if (b == 0)
            return a;
        else
            return 1 + soma(a, b-1);
    }
void main (void){
int num, resultado;
printf ("Digite um numero natural: ");
scanf ("%d", &num);
resultado = soma (suc (num), pred (num) ) ;
printf ("A soma de %d e %d e %d.\n", suc (num), pred (num), resultado) ;
}
