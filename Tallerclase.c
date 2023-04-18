#include <stdio.h>

int es_primo(int n);

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);
    if (es_primo(numero)) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }
    return 0;
}

int es_primo(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}