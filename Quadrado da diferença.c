#include <stdio.h>

int main() {
    int A, B;
    int resultado;

    // Ler os dois números inteiros
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Calcular o quadrado da diferença (A - B)^2
    resultado = (A - B) * (A - B);

    // Exibir o resultado
    printf("O quadrado da diferença entre A e B é: %d\n", resultado);

    return 0;
}
