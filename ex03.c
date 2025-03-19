#include "stdio.h"

int main() {
    int a;
    int b;
    int c;
    
    while ( a != -1) {
    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);
    if (a > (b + c)) {
        puts("Não é um triângulo retângulo");
    } else if (b > (a + c)) {
        puts("Não é um triângulo retângulo");
    } else if (c > (a+b)) {
        puts("Não é um triângulo retângulo");
    } else {
        puts("É um triângulo retângulo");
    } 
    } return 0;
}