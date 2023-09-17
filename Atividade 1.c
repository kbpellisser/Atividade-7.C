#include <stdio.h>

//1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

int main() {
    int N, i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (i = 0; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}
