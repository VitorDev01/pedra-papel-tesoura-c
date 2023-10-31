#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    
    printf("Bem-vindo ao jogo Pedra, Papel, Tesoura em C!\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    
    // Receba a escolha do jogador
    printf("Sua escolha: ");
    scanf("%d", &jogador);
    
    // Verifique se a escolha do jogador é válida
    if (jogador < 1 || jogador > 3) {
        printf("Escolha inválida. Por favor, escolha 1, 2 ou 3.\n");
        return 1;
    }
    
    // Gere uma escolha aleatória para o computador (1 a 3)
    srand(time(0));
    computador = rand() % 3 + 1;
    
    // Exiba as escolhas do jogador e do computador
    printf("Jogador escolheu: ");
    if (jogador == 1)
        printf("Pedra\n");
    else if (jogador == 2)
        printf("Papel\n");
    else
        printf("Tesoura\n");
    
    printf("Computador escolheu: ");
    if (computador == 1)
        printf("Pedra\n");
    else if (computador == 2)
        printf("Papel\n");
    else
        printf("Tesoura\n");
    
    // Determine o vencedor
    if (jogador == computador)
        printf("Empate!\n");
    else if ((jogador == 1 && computador == 3) ||
             (jogador == 2 && computador == 1) ||
             (jogador == 3 && computador == 2))
        printf("Você venceu!\n");
    else
        printf("O computador venceu!\n");
    
    return 0;
}

