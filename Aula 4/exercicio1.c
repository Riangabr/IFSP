#include <stdio.h>
void main() {
    
    float nota = 0.0;
    printf("Qual o valor da sua compra?");
    scanf("%f", &nota); // %d int %f float
    
    if(nota >=50){
        printf("Você ganhou o brinde!");
    }
}