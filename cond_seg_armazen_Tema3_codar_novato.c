#include <stdio.h>

int main() {
    
    // Definindo variáveis    
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    // Entrando com os dados
    printf("Digite a temperatura (em °C): \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade (em %%): \n");
    scanf("%f", &umidade);
    printf("Digite o estoque (em unidades): \n");
    scanf("%u", &estoque);

    // Verificando as condições e imprimindo as mensagens
    if (temperatura > 30){
        printf ("A temperatura está alta.\n");
    } else {
        printf ("A temperatura está dentro dos parâmetros.\n");}    

    if (umidade > 50){
        printf ("A umidade está alta.\n");
    } else {
        printf ("A umidade está dentro dos parâmetros.\n");}

    if (estoque < estoqueminimo){
        printf ("O estoque está abaixo do mínimo.\n");
    } else {
        printf ("O estoque está normal.\n");
    }

        return 0;
    }
 
