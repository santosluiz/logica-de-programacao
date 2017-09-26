#include <stdio.h>
#include <stdlib.h>

// 45. Escreva um programa que leia 5 números, e imprima a média entre eles. 

main(){
	float vetor[5], soma = 0, media = 0;
	int i;
	
	for(i=0; i<5; i++){
		printf("Digite um numero:");
		scanf("%f", &vetor[i]);
	}

	for(i=0; i<5; i++){				
		soma += vetor[i];		
	}	
	
	media = soma/5;
	
	printf("%2.f", media);	
}
