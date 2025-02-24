#include <stdio.h>  // Inclusão da biblioteca para entrada e saída de dados

int main() {
    // Declaração das variáveis
    int idade, matricula;   // Variáveis inteiras para idade e matrícula
    float altura;            // Variável do tipo float para armazenar a altura (número decimal)
    char nome[50];           // Vetor de caracteres (string) para armazenar o nome do aluno

    // Solicita ao usuário que insira a idade
    printf("Digite sua idade: \n");
    scanf("%d", &idade);  // Lê a idade inserida e a armazena na variável 'idade'

    // Solicita ao usuário que insira a altura
    printf("Digite sua altura: \n");
    scanf("%f", &altura);  // Lê a altura inserida e a armazena na variável 'altura'

    // Solicita ao usuário que insira o nome
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);  // Lê o nome inserido e armazena no vetor 'nome'

    // Solicita ao usuário que insira o número da matrícula
    printf("Digite sua matricula \n");
    scanf("%d", &matricula);  // Lê a matrícula inserida e armazena na variável 'matricula'

    // Exibe os dados informados pelo usuário
    printf("Nome do aluno: %s - Matricula: %d", nome, matricula);  // Exibe o nome e a matrícula do aluno
    printf("Idade: %d - Altura: %f", idade, altura);  // Exibe a idade e a altura do aluno

    return 0;  // Indica que o programa foi executado com sucesso
}
