#include <stdio.h>

int main() {
    int tipo;

    printf("Tipo (casal - 1, familia com crianca - 2, outros - 3): ");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1:
            printf("Indicar area jardim.\n");
            break;
        case 2:
            printf("Indicar area brinquedos.\n");
            break;
        case 3:
            printf("Indicar area vip.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
