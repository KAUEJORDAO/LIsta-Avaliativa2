int main() {
    int n, i, t1 = 0, t2 = 1, proximoTermo;

    printf("Digite um valor inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo de ordem %d da sequencia de Fibonacci eh: %d\n", n, t1);
    } else if (n == 1) {
        printf("O termo de ordem %d da sequencia de Fibonacci eh: %d\n", n, t2);
    } else {
        for (i = 2; i <= n; i++) {
            proximoTermo = t1 + t2;
            t1 = t2;
            t2 = proximoTermo;
        }
        printf("O termo de ordem %d da sequencia de Fibonacci eh: %d\n", n, proximoTermo);
    }

    return 0;
}

