#include <stdio.h>
#include <stdlib.h>

//21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo

main(){
	int numero;
	
	printf("Digite um numero:");
	scanf("%d", &numero);
	
	if(numero > 0){
		puts("Voce digitou um numero positivo!");
	} else 
	if(numero < 0){
		puts("Voce digitou um numero negativo!");
	}else{
		puts("Voce digitou o numero zero - 0!");
	}	
}
