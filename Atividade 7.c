#include <stdio.h>

//7. Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:


int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int contador_feminino_idade = 0;
    int contador_total = 0;

    while (1) {
        printf("Digite o sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'f') {
            printf("Digite a cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);

            printf("Digite a cor dos cabelos (l/c/p/r): ");
            scanf(" %c", &cabelos);

            printf("Digite a idade: ");
            scanf("%d", &idade);

            printf("Digite o salario: ");
            scanf("%f", &salario);

            if (idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
                contador_feminino_idade++;
            }
        }

        contador_total++;

        if (idade == -1) {
            break;
        }
    }

    float porcentagem_feminino_idade = (float)contador_feminino_idade / contador_total * 100.0;

    printf("Porcentagem de individuos do sexo feminino, com idade entre 18 e 35 anos, e que tem olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem_feminino_idade);

    return 0;
}
