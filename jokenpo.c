#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhajogador, escolhamaquina;
    srand(time(0));
    printf("*** jogo de Jokenpô ***\n");
    printf("Escolha: 1 - Pedra, 2 - Papel, 3 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhajogador);

    escolhamaquina = rand() % 3 + 1;

    switch (escolhajogador)
    {
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
        break;
    }

    switch (escolhamaquina)
    {
    case 1:
        printf("A máquina escolheu Pedra.\n");
        break;
    case 2:
        printf("A máquina escolheu Papel.\n");
        break;
    case 3:
        printf("A máquina escolheu Tesoura.\n");
        break;
    }   
    if (escolhajogador == escolhamaquina)
    {
        printf("Empate!\n");

    } else if ((escolhajogador == 1 && escolhamaquina == 3) || 
               (escolhajogador == 2 && escolhamaquina == 1) ||
               (escolhajogador == 3 && escolhamaquina == 2))
    {
        printf("Você venceu!\n");

    } else {
        printf("A máquina venceu!\n");
    
        return 0;
    }
}
