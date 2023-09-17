#include <stdio.h>

//4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.


int main() {
    int i, count = 0;

    for (i = 1; count < 5; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
            count++;
        }
    }

    return 0;
}