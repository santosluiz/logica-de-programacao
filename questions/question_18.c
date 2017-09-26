#include <stdio.h>
#include <stdlib.h>

//18. Escreva um programa que permute o valor de duas variáveis inteiras.

main(){
	int a, b, aux;
	
	printf("Digite o numero A:");
	scanf("%d", &a);
	
	printf("Digite o numero B:");
	scanf("%d", &b);	
	
	aux = a;
	a = b;
	b = aux;
	
	printf("Valor de A: %d \nValor de B: %d", a, b);	
}
