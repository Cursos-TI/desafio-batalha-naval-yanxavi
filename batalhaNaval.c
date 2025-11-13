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

    // LIMITADORES DOS NAVIOS NA DIAGONAL
   
    
    printf("TABULEIRO DE BATALHA NAVAL\n\n");

    printf("   ");
    for(int x = 0; x < 10; x++) {
        printf("%c  ", linhaTabela[x]);
    };

    printf("\n");

    for( int i = 0; i < 10; i++) { // i é a linha
// ##### IMPRESSÃO DO VALOR DA LINHA
        if (i < 9){ 
              printf("%d |", i + 1);
        }  else { // QUANDO i CHEGA A 9, O TERMINAL IMPRIME SEM O ESPAÇO ENTRE LETRA E O pipe ( | )
            printf("%d|", i + 1); 
        };
        int limitador1, limitador2; //LIMITADORES PARA OS NAVIOS DA DIAGONAL PRINCIPAL E EM OUTRA DIAGONAL 


// ####  IMPRESSÃO DAS LINHAS
        for(int j = 0; j < 10; j++){ // j é a linha
            limitador1 = j; // O LIMITADOR VAI TER OS MESMOS VALORES DE j, limitador1 = x ↔ j = x;
            limitador2 = j; // O LIMITADOR VAI TER OS MESMOS VALORES DE j, limitador2 = x ↔ j = x;

            // IMPRESSÃO NA DIAGONAL PRINCIPAL DE E5 ATÉ G7 #####################################################################################################
            if (j == i){ // EXECUTADO QUANDO j E i FOREM IGUAIS

                
                if (limitador1 < 7){ // EXECUTADO SOMENTE QUANDO limitador1 É MENOR QUE 7, OU SEJA, TERMINA NA COLUNA 'G'

                    // O NAVIO (Nº 3) É COLOCADO NA DIAGONAL A PARTIR DA COLUNA 'E'
                tabuleiro[i][j] = (limitador1 > 3 ? 3 : 0); // QUANDO limitador1 FOR MAIOR QUE 3, O TABULEIRO RECEBE 3, SE NÃO, RECEBE 0 
                }
            } 

            // IMPRESSÃO NA DIAGONAL DE E2 ATÉ C4 #####################################################################################################
            else if (i + j == 5){
                if (limitador2 < 5){
                    tabuleiro[i][j] = limitador2 > 1 ? 3 : 0;
                };
            }

            // IMPRESSÃO NA HORIZONTAL DE B8 ATÉ D8 #####################################################################################################
            else if (i == 7 && j > 0 && j < 4)
            {
                tabuleiro[i][j] = 3;
            
            }
            
            // IMPRESSÃO NA VERICAL J4 ATÉ J6 #####################################################################################################
            else if ( j == 8 && i > 2 && i < 6)
            {
                tabuleiro[i][j] = 3;
            };
            
            printf("%d  ", tabuleiro[i][j]); // PRINTA O VALOR DO TABULEIRO
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
