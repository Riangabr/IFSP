#include <stdio.h>

int main() {
    float C, i, M;
    float t;

    printf("Capital: ");
    scanf("%f", &C);
    printf("Juros (%%): ");
    scanf("%f", &i);
    printf("Tempo: ");
    scanf("%f", &t);

    M = C * (1 + (i / 100) * t);
    printf("Montante: %.2f", M);

    return 0;
}