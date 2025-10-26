#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções para movimentação das peças
// Função recursiva para movimentação da Rainha

void movimentorainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        movimentorainha(casas - 1);
    }
}

// Função recursiva para movimentação da Torre

void movimentotorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        movimentotorre(casas - 1);
    }
}

// Função para movimentação do Bispo

void movimentobispo(int casas){
    // Garantir entrada válida
    if (casas <= 0) return;
    // Loop externo: movimento horizontal (direita)
    for (int h = 0; h < casas; h++)
    {
        // Loop interno: movimento vertical (cima)
        // Aqui o loop interno executa 1 iteração por passo horizontal (imprime "Cima").
        for (int v = 0; v < 1; v++)
        {
            printf("Cima\n");
        }
        // Movimento horizontal após os passos verticais
        printf("Direita\n");
    }
}

// Função principal
// Esta função é responsável por gerenciar a execução do programa e a interação com o usuário.

int main() {

    //Declaração de Variaveis e seus incrementos

    const int movimento_torre = 5;
    const int movimento_bispo = 5;
    const int movimento_rainha = 8;
    const int movimento_cavalo_horizontal = 1;
    const int movimento_cavalo_vertical = 2;

    int i, escolhajogador;

    // Menu de escolha da Peça de Xadrez

    printf("--- Desafio Xadrez --- \n");
    printf("Escolha uma Peça para iniciar os movimentos...\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Escolha uma opção válida!\n");
    scanf("%d", &escolhajogador);

    // Estrutura de impressão dentro do Switch...
    // Impressão de Movimentação da Torre

    switch (escolhajogador)
    {
    case 1:
        printf("*** Peça Escolhida: Torre ***\n");
        printf("\n");
        printf("Começando movimento, %d casas para a direita...\n", movimento_torre);
        
        movimentotorre(5);
            
        printf("Movimento da Torre concluído!");

        break;

    // Impressão de Movimentação do Bispo
    
    case 2:
        printf("*** Peça Escolhida: Bispo ***\n");
        printf("\n");
        printf("Começando movimento, %d casas na diagonal superior direita...\n", movimento_bispo);
        
        movimentobispo(5);
        
        printf("Movimento do Bispo concluído!");

        break;

   // Impressão de Movimentação da Rainha

    case 3:
        printf("*** Peça Escolhida: Rainha ***\n");
        printf("\n");
        printf("Começando movimento, %d casas para a esquerda...\n", movimento_rainha);
        
        movimentorainha(8);

        printf("Movimento da Rainha concluído!");

        break;

    // Impressão de Movimentação do Cavalo

    case 4: {
        printf("*** Peça Escolhida: Cavalo ***\n");
        printf("\n");
        printf("Começando movimento, %d casas para cima e %d casa para a direita...\n", movimento_cavalo_vertical, movimento_cavalo_horizontal);

        // Declarar variáveis dentro de um bloco...
        
        int cavalo_horizontal = 1;
        int cavalo_vertical = 0;

        while (cavalo_horizontal--)
        {
            for (cavalo_vertical = 0, cavalo_horizontal = 0; cavalo_vertical < 2 && cavalo_horizontal < 1; cavalo_vertical++)
            {
                printf("Cima\n");
                continue;
            }
            printf("Direita\n");
            break;
        }
        
        printf("Movimento do Cavalo concluído!");
        
        break;
    }
    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}