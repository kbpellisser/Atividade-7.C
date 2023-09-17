#include <stdio.h>

//5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 


int main() {
    int i, soma = 0;

    for (i = 2; i <= 100; i += 2) {
        soma += i;
    }

    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

    return 0;
}
