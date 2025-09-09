#include <stdio.h>

int main(){
    int bispo=0, torre, rainha=0;

    printf("### Movimento das peças de xadrez ###\n\n");

    //movimentação da peça Torre cinco casas para a direita.
    printf("Peça: Torre\n");
    for(torre=0; torre<5; torre++){
        printf("Direita\n");
    }

    //movimentação da peça Bispo cinco casas na diagonal para cima e à direita.
    printf("\nPeça: Bispo\n");
    while(bispo<5){
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }

    //movimentação da peça Rainha oito casas para a esquerda.
    printf("\nPeça: Rainha\n");
    do{
        printf("Esquerda\n");
        rainha++;
    } while(rainha<8);

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
