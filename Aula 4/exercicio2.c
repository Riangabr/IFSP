#include <stdio.h>

int main() {
    int horas, minutos;
    int minutos_trabalhados;
    int minutos_banco = 480; // 8 horas = 480 minutos
    int diferenca;
    int horas_banco, minutos_banco_resultado;
    
    printf("Quantas horas trabalhou? ");
    scanf("%d", &horas);
    printf("Quantos minutos? ");
    scanf("%d", &minutos);
    
    minutos_trabalhados = (horas * 60) + minutos;
    diferenca = minutos_trabalhados - minutos_banco;
    
    if(diferenca > 0) {
        horas_banco = diferenca / 60;
        minutos_banco_resultado = diferenca % 60;
        if(horas_banco > 0) {
            printf("Quantidade adicionada ao banco: %d hora(s) %d minuto(s)\n", horas_banco, minutos_banco_resultado);
        }
        else {
            printf("Quantidade adicionada ao banco: %d minuto(s)\n", minutos_banco_resultado);
        }
    }
    else if(diferenca < 0) {
        diferenca = diferenca * (-1);
        horas_banco = diferenca / 60;
        minutos_banco_resultado = diferenca % 60;
        if(horas_banco > 0) {
            printf("Quantidade retirada do banco: %d hora(s) %d minuto(s)\n", horas_banco, minutos_banco_resultado);
        }
        else {
            printf("Quantidade retirada do banco: %d minuto(s)\n", minutos_banco_resultado);
        }
    }
    else {
        printf("Nenhuma alteracao no banco de horas!\n");
    }
    
    return 0;
}
