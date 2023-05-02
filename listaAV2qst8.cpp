#include <stdio.h>

int main() {
    int num, maior = 0, menor = 0;
    int primeiro = 1; 

    while (1) {
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &num);

        if (num < 0) {
            break; 
        }

        if (primeiro) {
            maior = num;
            menor = num;
            primeiro = 0;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("O maior numero lido foi %d e o menor foi %d\n", maior, menor);

    return 0;
}

