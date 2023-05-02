#include <stdio.h>

int main() {
    int opcao = 0, quantidade = 0;
    float valor_total = 0;

    while (opcao != 4) {
        printf("Menu de Frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("4 => Encerrar compra\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de maçãs desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras desejada: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4.0;
                break;
            case 4:
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\n");
    }

    printf("Valor total da compra: %.2f\n", valor_total);

    return 0;
}

