#include <stdio.h>

//2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 

int main() {
    int N, i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (i = N; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
