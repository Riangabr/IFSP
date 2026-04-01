#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = n; i <= 10; i++)
        printf("%d\n", i);

    return 0;
}
