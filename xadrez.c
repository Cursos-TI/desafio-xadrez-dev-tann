#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Declaração de Variaveis e seus incrementos

    const int movimento_torre = 5;
    const int movimento_bispo = 5;
    const int movimento_rainha = 8;

    int i, escolhajogador;
    int contador_rainha = 0;
    int contador_bispo = 0;

    // Menu de escolha da Peça de Xadrez

    printf("--- Desafio Xadrez --- \n");
    printf("Escolha uma Peça para iniciar os movimentos...\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Escolha uma opção válida!\n");
    scanf("%d", &escolhajogador);

    //Estrutura de repetições dentro do Switch, cada peça com uma estrutura diferente...
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    switch (escolhajogador)
    {
    case 1:
        printf("*** Peça Escolhida: Torre ***\n");
        printf("\n");
        printf("Começando movimento, %d casas para a direita...\n", movimento_torre);
        for (i = 0; i < movimento_torre; i++)
        {
            printf("Direita\n");
        }
            
        printf("Movimento da Torre concluído!");

        break;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    case 2:
        printf("*** Peça Escolhida: Bispo ***\n");
        printf("\n");
        printf("Começando movimento, %d casas na diagonal superior direita...\n", movimento_bispo);
        do
        {
            printf("Cima\n");
            printf("Direita\n");
            contador_bispo++;
        } while (contador_bispo < movimento_bispo);
        
        printf("Movimento do Bispo concluído!");

        break;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    case 3:
        printf("*** Peça Escolhida: Rainha ***\n");
        printf("\n");
        printf("Começando movimento, %d casas para a esquerda...\n", movimento_rainha);
        while (contador_rainha < movimento_rainha)
        {
            printf("Esquerda\n");
            contador_rainha++;
        }

        printf("Movimento da Rainha concluído!");

        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
