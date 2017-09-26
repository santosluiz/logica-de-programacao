#include <stdio.h>
#include <stdlib.h>

// 44. Escreva um programa que imprima 20 números, inclusive, e a soma de todos eles.

main(){
	int vetor[20], i, soma = 0;
	
	for(i=0; i<20; i++){
		printf("Digite um numero:");
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<20; i++){				
		printf("%d\n", vetor[i]);
	}		
	
	puts("........ Soma dos valores .........");
	
	for(i=0; i<20; i++){				
		soma += vetor[i];		
	}	
	
	printf("%d", soma);	
}
