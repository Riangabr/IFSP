#include <stdio.h>

int main() {
    int horas, minutos, diferenca;

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Minutos: ");
    scanf("%d", &minutos);

    int totalTrabalhado = horas * 60 + minutos;
    int totalEsperado   = 8 * 60;

    diferenca = totalTrabalhado - totalEsperado;

    (diferenca > 0)
        ? printf("Quantidade adicionada ao banco: %d minutos\n",  diferenca)
        : (diferenca < 0)
            ? printf("Quantidade retirada do banco: %d minutos\n", -diferenca)
            : printf("Nenhuma alteracao no banco de horas.\n");

    return 0;
}
