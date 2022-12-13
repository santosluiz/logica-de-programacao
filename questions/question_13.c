#include <stdio.h>
#include <stdlib.h>

// 13. Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência equivalente desse circuito.

main(){
    //Declaração de Variavel
    float r1, r2, r3, ret;
    printf("Este programa faz cálculo de resistores\n");
    printf("Qual o valor do primeiro resistor em paralelo:");
    scanf("%f", &r1);
    printf("Qual o valor do segundo resistor em paralelo:");
    scanf("%f", &r2);
    printf("Qual o valor do terceiro resistor, o que está em série com os em paralelo:");
    scanf("%f", &r3);
    ret = ((r1 * r2)/(r1 + r2) + r3);
    printf("O valor total resistência do circuito é de: %.2f", ret);
    return 0;	
}
