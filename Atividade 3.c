#include <stdio.h>

//3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 

int main() {
    int N, i;
    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    for (i = 1; N > 0; i += 2, N--) {
        printf("%d\n", i);
    }

    return 0;
}
