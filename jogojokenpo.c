#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhajogador, escolhacomputador;
    srand(time(0));

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("\n");
    scanf("%d", &escolhajogador);

    escolhacomputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3

    switch (escolhajogador) {
        case 1:
            printf("Você escolheu Pedra.\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n");
            break;
        default:
            printf("Escolha inválida!\n");
            return 1;
    }
    switch (escolhacomputador) {
        case 1:
            printf("Computador escolheu Pedra.\n");
            break;
        case 2:
            printf("Computador escolheu Papel.\n");
            break;
        case 3:
            printf("Computador escolheu Tesoura.\n");
            break;
} 
            if (escolhajogador == escolhacomputador) {
                printf("***Empate!***\n");
            } else if ((escolhajogador == 1 && escolhacomputador == 3) ||
                       (escolhajogador == 2 && escolhacomputador == 1) ||
                       (escolhajogador == 3 && escolhacomputador == 2)) {
                printf("Você ganhou!\n");
            } else {
                printf("Vitória do Computador!\n");
            }
            return 0;
        }