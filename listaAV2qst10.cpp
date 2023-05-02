#include <stdio.h>

int main() {
    int nums[10];
    int i, soma = 0;
    float media;
  
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &nums[i]);
        soma += nums[i];
    }
   
    media = soma / 10.0;

    printf("A média é %.2f\n", media);

    return 0;
}


