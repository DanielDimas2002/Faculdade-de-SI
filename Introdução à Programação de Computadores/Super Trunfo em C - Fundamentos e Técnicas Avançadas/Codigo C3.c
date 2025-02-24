#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis
    int idade = 25;              // Armazena um número inteiro
    float altura = 1.75;         // Armazena um número decimal de precisão simples
    double saldoBancario = 12345.67; // Armazena um número decimal de dupla precisão
    char inicial = 'A';          // Armazena um único caractere
    char nome[20] = "Bruno";     // Armazena uma string (conjunto de caracteres)

    // Exibição dos valores iniciais das variáveis
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Letra: %c \n", inicial);
    printf("O nome é: %s\n", nome);

    // Solicitação de novos valores para as variáveis
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);  // Lendo um número inteiro

    printf("Informe sua altura: ");
    scanf("%f", &altura);  // Lendo um número decimal (float)

    printf("Informe o seu saldo bancário (O golpe está aí, cai quem quer...): ");
    scanf("%lf", &saldoBancario);  // Lendo um número decimal (double), usa-se `%lf` para `double`

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);  // O espaço antes de `%c` evita que o `scanf` leia um Enter residual

    printf("Digite seu nome: ");
    scanf("%s", nome);  // Para strings, `scanf` já trata como referência, então não precisa do `&`

    // Exibição dos valores digitados pelo usuário
    printf("A idade digitada foi: %d anos.\n", idade);
    printf("A sua altura é de %.2f metros.\n", altura);
    printf("O seu saldo bancário é de %.2f reais.\n", saldoBancario);
    printf("A inicial do seu nome é %c.\n", inicial);
    printf("O seu nome é %s.\n", nome);

    return 0;
}
