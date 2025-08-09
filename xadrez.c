#include <stdio.h>

    int main(){

        printf("*** Desafio Xadrez *** \n");

        int torre =5, bispo =5, rainha=8;

        // Usando o FOR
        printf("Movimetação da Torre ( 5 Casas Para Direita): \n");   
        for( int i =1; i<=torre; i++) 
        {
            // A TORRE SE MOVE EM LINHA PARA A DIREITA   
            printf("Direita \n");
            
        } 
        
        printf("\n");

        // Usando o WHILE   
        printf("Movimentação Do Bispo ( 5 Casas na Diagonal para cima e para Direita): \n");
        int passos =0;
        while (passos < bispo)
        {
            // BISPO SE MOVE NA DIAGONAL,  DUAS DIREÇÕES, CIMA E DIREITA
            printf(" Cima Direita\n");
            passos++;
        }
        
        printf(" \n");

        // usando o DO WHILE    
        printf("Movimento da Rainha ( 8 casas para a Esquerda)\n");
        int passos_rainha = 0;

        do
        {
            printf("Esquerda\n");
            passos_rainha ++;

        } while (passos_rainha<rainha);
        
        printf("\n");

        printf("Movimentação Cavalo, 2 casas para baixo e 1 para a Esquerda:\n");

        for( int i=0; i<2; i++)
        {
            printf("Cima\n");
        }

        int casa_esquerda=0;
        while(casa_esquerda<1)
        {
            printf("Esquerda\n");
            casa_esquerda++;
        }






        return 0;
    }