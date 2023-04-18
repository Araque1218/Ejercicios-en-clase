#include<stdio.h>
int si_es_primo(int m)
{
     int i;
    if (m <= 1) 
    {
        return 0;
    }
    for (i = 2; i * i <= m; i++) 
        if (m % i == 0) {
            return 0;
        }
}
   
int main() {
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    if (si_es_primo(num)) {
        printf("%d es un numero primo.\n", num);
    } else {
        printf("%d no es un numero primo.\n", num);
    }
    return 0;
}