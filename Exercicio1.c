
// a) T(n)= 3n + 1
void funcA(int n) {
    for(int i = 0; i < n; i++) { 
        printf("Operação %d\n", i);  // Primeira operação considerada
        printf("Operação %d\n", i);  // Segunda operação considerada
        printf("Operação %d\n", i);  // Terceira operação considerada
    }
    printf("Operação extra\n");  // Operação constante (1)
}

// b) T(n)= n - 3 
void funcB(int n) {
    for(int i = 0; i < n - 3; i++) { 
        printf("Operação %d\n", i);  // Operação considerada
    }
}

// c) T(n)= 2n^2 + n
void funcC(int n) {
    for(int i = 0; i < n; i++) {  
        for(int j = 0; j < n; j++) { 
            printf("Operação %d,%d\n", i, j);  // Primeira operação considerada (O(n^2))
            printf("Operação %d,%d\n", i, j);  // Segunda operação considerada (O(n^2))
        }
    }
    for(int k = 0; k < n; k++) {  
        printf("Operação %d\n", k);  // Operação considerada
    }
}

// d) T(n)= n^3
void funcD(int n) {
    for(int i = 0; i < n; i++) {  
        for(int j = 0; j < n; j++) { 
            for(int k = 0; k < n; k++) { 
                printf("Operação %d,%d,%d\n", i, j, k);  // Operação considerada (O(n^3))
            }
        }
    }
}

// e) T(n)= (n^3)/2 + 1
void funcE(int n) {
    int limit = (n * n * n) / 2;  // Calcula n^3 / 2
    for(int i = 0; i < limit; i++) {  
        printf("Operação %d\n", i);  // Operação considerada
    }
    printf("Operação extra\n");  // Operação constante (1)
}



