#include <stdio.h>
int main() {

    //Declarando a variável
    int num = 0;
    
    //Estrutura do do while
    do {
        printf("Digite um número negativo para sair: ");
        scanf("%d", &num);
        printf("Número digitado: %d\n", num);


    } while (num >= 0);
    printf("Programa encerrado.\n");
    return 0;
}