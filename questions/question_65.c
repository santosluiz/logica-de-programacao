#include <stdio.h>
#include <stdlib.h>
/* 65. Faca um programa em C que copie o conteudo de um vetor de 10 posicoes de inteiro em um segundo vetor e imprima este ultimo.

*/    

void insere(int *vet);
void copia(int *vet, int *vetCopia);

main(){
	int vetOriginal[10];
	int vetCopia[10];
	
	insere(vetOriginal);
	copia(vetOriginal, vetCopia);	
	
}

void insere(int *vet){
	int i;
	
	printf("Preencha o vetor com 10 itens: \n");
	for(i=0; i<10; i++){
		scanf("%d\n", &vet[i]);		
	}
	
	puts("\n\n");
}

void copia(int *vet, int *vetCopia){
	int i;
	
	for(i=0; i<10; i++){
		vetCopia[i] = vet[i];
	}
	
	for(i=0; i<10; i++){
		printf("%d\n", vetCopia[i]);
	}
}
