#include <stdio.h>

void torre(int casas){    
    if(casas>0){
        printf("Direita\n");
        torre(casas-1);
    }
}

void bispo(int casas){
    if (casas>0){
        for(int v = 0; v < 1; v++){
            printf("Cima\n");
            for(int h = 0; h < 1; h++){
                printf("Direita\n");
            }
        }
        bispo(casas-1);
    }
}

void rainha(int casas){
    if(casas>0){
        printf("Esquerda\n");
        rainha(casas-1);
    }
}

int main(){
    printf("\nPeça: Torre\n");
    torre(5);
    
    printf("\nPeça: Bispo\n");
    bispo(5);

    printf("\nPeça: Rainha\n");
    rainha(8);

    printf("\nPeça: Cavalo\n");
    for(int m=0, movimentos=1; m < movimentos; m++){
        for(int v=1; v<=2; v++){
            printf("Cima\n");
        }
        for(int h = 0; h < 1; h++){
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
