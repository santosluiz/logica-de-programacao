#include <stdio.h>
#include <stdlib.h>

//23. Escreva um programa que leia um numero e imprima se este numero e ou nao par.

void verifica(int numero);

int main(){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	verifica(numero);
}

void verifica(int numero){
	
	if(numero % 2 == 0){
		printf("%d e um numero par.", numero);
	} else {
		printf("%d e um numero impar.", numero);
	}
}
