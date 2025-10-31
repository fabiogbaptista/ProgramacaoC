#include <stdio.h>
int main() {
    //Declarando a variável
    int numero, i;

    printf("Digite um número para calcular a tabuada: \n");
    scanf("%d", &numero);

    for (i = 0; i <=10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
   
