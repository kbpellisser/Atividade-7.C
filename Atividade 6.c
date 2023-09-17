#include <stdio.h>

//6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.

int main() {
    int opcao;
    float total = 0;

    do {
        printf("Menu de frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => Finalizar compra\n");
        printf("Digite o numero da fruta desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total += 5.0;
        } else if (opcao == 2) {
            total += 1.0;
        } else if (opcao == 3) {
            total += 4.0;
        } else if (opcao != 0) {
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    printf("O valor total da compra e: %.2f\n", total);

    return 0;
}
