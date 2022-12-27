#include <stdio.h>
#include <stdlib.h>

//22. Escreva um programa que leia um número e exiba o seu módulo.

main(){
    float numero;
    printf("Digite um valor:");
    scanf("%f", &numero);
    if(numero > 0){
        printf("O numero é positivo");
    }else{
        if(numero < 0){
            printf("O numero é negativo");
        }else{
            printf("O numero é nulo");
        }
    }
}