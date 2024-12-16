// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável inteira para armazenar o número digitado pelo usuário.
    int numero;

    // Solicita ao usuário que digite um número entre 12 e 20.
    printf("Digite um numero entre 12 e 20: ");
    // Lê o número digitado e armazena na variável 'numero'.
    scanf("%d", &numero);

    // Enquanto o número digitado estiver fora do intervalo permitido (menor que 12 ou maior que 20).
    while (numero < 12 || numero > 20)
    {
        // Informa ao usuário que a entrada é inválida.
        printf("Entrada invalida\nDigite um numero entre 12 e 20: ");
        // Solicita novamente um número e armazena na variável 'numero'.
        scanf("%d", &numero);
    }

    // Exibe o número válido que foi digitado pelo usuário.
    printf("Numero digitado: %d", numero);
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0;
}
