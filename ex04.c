#include "stdio.h"

int main() {
    int raio;
    
    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);
    
    int diametro = raio + raio;
    printf("Diâmetro: %d\n", diametro);
    
    int circunferencia = (2 * 3.14) * raio;
    printf("Circunferência: %d\n", circunferencia);
    
    int area = (raio * raio) * 3.14;
    printf("Área: %d", area);
    return 0;
}