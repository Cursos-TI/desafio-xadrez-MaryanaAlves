#include <stdio.h>

int main(){
    int bispo=0, torre, rainha=0, cavalo;

    printf("### Movimento das peças de xadrez ###\n\n");
    
    printf("Peça: Torre\n");
    for(torre=0; torre<5; torre++){
        printf("Direita\n");
    }

    printf("\nPeça: Bispo\n");
    while(bispo<5){
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }

    printf("\nPeça: Rainha\n");
    do{
        printf("Esquerda\n");
        rainha++;
    } while(rainha<8);

    printf("\nPeça: Cavalo\n");
    for(cavalo=1; cavalo<=2; cavalo++){
        printf("Baixo\n");
        while(cavalo==2){
            printf("Esquerda\n");
            break;
        }
    }
    return 0;
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
