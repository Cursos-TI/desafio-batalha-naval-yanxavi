#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


    char linhaTabela[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K'};
    int tabuleiro[10][10] = {0};
    int primeNavio[3] = {3};
    int segunNavio[3] = {3};
    
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;
    tabuleiro[8][8] = 3;

    printf("TABULEIRO DE BATALHA NAVAL\n\n");

    printf("   ");
    for(int x = 0; x < 10; x++) {
        printf("%c  ", linhaTabela[x]);
    };

    printf("\n");

    for( int i = 0; i < 10; i++) { // i é a coluna
// ##### IMPRESSÃO DO VALOR DA COLUNA
        if (i < 9){ 
              printf("%d |", i + 1);
        }  else { // QUANDO i CHEGA A 9, O TERMINAL IMPRIME SEM O ESPAÇO ENTRE LETRA E O pipe ( | )
            printf("%d|", i + 1); 
        };


// ####  IMPRESSÃO DAS LINHAS
        for(int j = 0; j < 10; j++){ // j é a linha
            printf("%d  ", tabuleiro[i][j]);

            if (j > 9) break;
        };
        
        printf("\n");
        if (i > 9) break;
    };

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
