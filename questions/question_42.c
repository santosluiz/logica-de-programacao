#include <stdio.h>
#include <stdlib.h>

// 42. Escreva um programa que imprima todos os números inteiros de 10 a 1 (em ordem decrescente).

main(){
	int vetor[10], i, j, aux;
	
	for(i=0; i<10; i++){
		printf("Digite um numero:");
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<10; i++){	
		for(j=i+1; j<10; j++){		
		
			if(vetor[i] < vetor[j]){		
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;			
			}
		}
	}

	for(i=0; i<10; i++){
		printf("%d\n", vetor[i]);
	} 	
}
