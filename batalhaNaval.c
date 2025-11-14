#include <stdio.h>

#define LINHA 10
#define COLUNA 10


int main() {
    char coluna[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHA][COLUNA] = {0};
    int contadorCruz = 1;
    int contadorOctaedro = 1;

    printf("TABULEIRO DE BATALHA NAVAL\n\n");

    printf("   ");
    for(int x = 0; x < 10; x++) {
        printf("%c  ", coluna[x]);
    };
    
    printf("\n");


    for( int i = 0; i < 10; i++) { // i é a linha
// // ##### IMPRESSÃO DO VALOR DA LINHA
        if (i < 9){ 
            printf("%d |", i + 1);
        }  
        else { // QUANDO i CHEGA A 9, O TERMINAL IMPRIME SEM O ESPAÇO ENTRE LETRA E O pipe ( | )
            printf("%d|", i + 1); 
        };
        for(int j = 0; j < 10; j++){
            
            // IMPRESSÃO DO CONE #####################################################################################################
            if (i == 1){
                if (j == 6){
                    tabuleiro[i][j] = 3;
                }
            } else if (i == 2){
                if(j >= 5 && j <= 7){
                    tabuleiro[i][j] = 3;
                }
            } else if (i == 3){
                if (j >= 4 && j <= 8){
                    tabuleiro[i][j] = 3;
                }
            }


            // IMPRESSÃO DA CRUZ #####################################################################################################
            if ( j == 2){
                if (i > 3 && i < 7){
                    tabuleiro[i][j] = 3;
                }
            } else if (i == 5){
                tabuleiro[i][j] = 3;
                if (contadorCruz >= 5 ) {
                    tabuleiro[i][j] = 0;
                } 
                contadorCruz++;
            }


            // IMPRESSÃO DO OCTAEDRO #####################################################################################################
            if ( j == 7){
                if (i > 5 && i < 9){
                    tabuleiro[i][j] = 3;
                }
            } else if (i == 7 && j > 5){
                tabuleiro[i][j] = 3;
                if (contadorOctaedro >= 3 ) {
                    tabuleiro[i][j] = 0;
                } 
                contadorOctaedro++;
            }

            printf("%d  ", tabuleiro[i][j]); // PRINTA O VALOR DO TABULEIRO
        }

        printf("\n");

    }

    return 0;

}




// int navio(){
//     char coluna[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K'};
//     int tabuleiro[LINHA][COLUNA] = {0};
//     char valorColuna = 'A';

   
    
//     printf("TABULEIRO DE BATALHA NAVAL\n\n");

//     printf("   ");
//     for(int x = 0; x < 10; x++) {
//         printf("%c  ", coluna[x]);
//     };

//     printf("\n");

//     for( int i = 0; i < 10; i++) { // i é a linha
// // ##### IMPRESSÃO DO VALOR DA LINHA
//         if (i < 9){ 
//               printf("%d |", i + 1);
//         }  else { // QUANDO i CHEGA A 9, O TERMINAL IMPRIME SEM O ESPAÇO ENTRE LETRA E O pipe ( | )
//             printf("%d|", i + 1); 
//         };
//         int limitador1, limitador2; //LIMITADORES PARA OS NAVIOS DA DIAGONAL PRINCIPAL E EM OUTRA DIAGONAL 


// // ####  IMPRESSÃO DAS LINHAS
//         for(int j = 0; j < 10; j++){ // j é a linha
//             limitador1 = j; // O LIMITADOR VAI TER OS MESMOS VALORES DE j, limitador1 = x ↔ j = x;
//             limitador2 = j; // O LIMITADOR VAI TER OS MESMOS VALORES DE j, limitador2 = x ↔ j = x;

//             // IMPRESSÃO NA DIAGONAL PRINCIPAL DE E5 ATÉ G7 #####################################################################################################
//             if (j == i){ // EXECUTADO QUANDO j E i FOREM IGUAIS

                
//                 if (limitador1 < 7){ // EXECUTADO SOMENTE QUANDO limitador1 É MENOR QUE 7, OU SEJA, TERMINA NA COLUNA 'G'

//                     // O NAVIO (Nº 3) É COLOCADO NA DIAGONAL A PARTIR DA COLUNA 'E'
//                 tabuleiro[i][j] = (limitador1 > 3 ? 3 : 0); // QUANDO limitador1 FOR MAIOR QUE 3, O TABULEIRO RECEBE 3, SE NÃO, RECEBE 0 
//                 }
//             } 

//             // IMPRESSÃO NA DIAGONAL DE E2 ATÉ C4 #####################################################################################################
//             else if (i + j == 5){
//                 if (limitador2 < 5){
//                     tabuleiro[i][j] = limitador2 > 1 ? 3 : 0;
//                 };
//             }

//             // IMPRESSÃO NA HORIZONTAL DE B8 ATÉ D8 #####################################################################################################
//             else if (i == 7 && j > 0 && j < 4)
//             {
//                 tabuleiro[i][j] = 3;
            
//             }
            
//             // IMPRESSÃO NA VERICAL J4 ATÉ J6 #####################################################################################################
//             else if ( j == 8 && i > 2 && i < 6)
//             {
//                 tabuleiro[i][j] = 3;
//             };
            
//             printf("%d  ", tabuleiro[i][j]); // PRINTA O VALOR DO TABULEIRO
//           if (j > 9) break;
//         };
        
//         printf("\n");
//         if (i > 9) break;
//     };
//     return 0;
// }

