#include "stdio.h"

int main() {
    int contador = 1;
    float nota;
    float total = 0.0;
    
    while ( nota != -5 ) {
        printf("Digite a nota %d: ", contador);
        scanf("%f", &nota);
       
        total = total + nota;
        
        contador = contador + 1;
    } total = total + 5;
    contador = contador - 2;
    float media = total / contador;
    printf("Media: %.1f", media);
    return 0;
}