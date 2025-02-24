#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    int num1, num2, soma;  // Declaração de três variáveis inteiras

    // Solicita ao usuário que insira o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);  // Lê o valor digitado e armazena na variável num1

    // Solicita ao usuário que insira o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &num2);  // Lê o valor digitado e armazena na variável num2

    // Realiza a soma dos dois números
    soma = num1 + num2;

    // Exibe o resultado da soma
    printf("A soma é: %d\n", soma);  // \n para quebrar a linha no final

    return 0;  // Indica que o programa terminou com sucesso
}
