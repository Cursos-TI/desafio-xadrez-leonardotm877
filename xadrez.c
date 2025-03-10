#include <stdio.h>

// Definindo constantes para o número de casas a serem movidas
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n"); // A Torre se move 5 casas para a direita
    }

    // Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < CASAS_BISPO) {
        printf("Cima, Direita\n"); // O Bispo se move 5 casas na diagonal (cima e direita)
        contador_bispo++;
    }

    // Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n"); // A Rainha se move 8 casas para a esquerda
        contador_rainha++;
    } while (contador_rainha < CASAS_RAINHA);

    return 0;
}