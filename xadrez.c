#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



 /*Funções recursivas pode ser usadas para substituir loops,
nesse caso para movimentação das peças xadrez */

//Funções recursivas
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direta\n");
        moverTorre(casas - 1);
    }
}                                   

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima,Direita\n");
        moverBispo(casas - 1);
    }
}

int main()
{

    int r = 1; // Rainha
    int b = 1; // Bispo

    printf("*** MOVIMENTO TORRE ***\n");

    // Mover torre 5 casas para direita
    for (int t = 0; t < 5; t++)
    {
        printf("Direta\n"); // Imprime direção do movimento
    }

    printf("*** MOVIMENTO RAINHA ***\n");

    // Mover rainha  8 casas para esquerda
    while (r <= 8)
    {
        printf("Esquerda\n"); // Imprime direção do movimento
        r++;
    }

    printf("*** MOVIMENTO BISPO ***\n");

    // Mover bispo diagonal 5 casas
    do
    {
        printf("Cima,Direita\n"); // Imprime direção do movimento,nesse caso diagonal
        b++;
    } while (b <= 5);

    printf("*** MOVIMENTO CAVALO ***\n");

    // Movimento  em L Cavalo
    for (int i = 0; i < 1; i++) // Loops alinhados
    {
        printf("Direita\n"); // Imprime direita uma vez
        for (int k = 0; k < 2; k++)
        {
            printf("Cima\n"); // Imprime cima duas vezes
        }
    }

    printf("*** RECURSIVIDADE  ***\n");
    moverRainha(8);
    moverTorre(5);
    moverBispo(5);
    
    return 0;
}
