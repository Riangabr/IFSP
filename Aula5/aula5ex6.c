#include <stdio.h>

int main() {
    char modo = 'i';

    for(; modo != 'F'; ) {
        printf("Digite o modo (L-lavar, S-secar, E-enxaguar, F-fim): ");
        scanf(" %c", &modo); 

        switch(modo) {
            case 'L':
                printf("Lavando\n");
                break;
            case 'S':
                printf("Secando\n");
                break;
            case 'E':
                printf("Enxaguando\n");
                break;
            case 'F':
                printf("Fim\n");
                break;
            default:
                printf("Modo invalido\n");
        }
    }
    printf("Finalizado");
    return 0;
}