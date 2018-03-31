#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/* 63. Faca um programa em C que leia um array de 20 inteiros e imprima o menor e o maior valor dentre os elementos do array.

*/    
void leitura(int *vet);
void exibeMenor(int *vet);
void exibeMaior(int *vet);

main(){
	
	int vet[TAM];
	int i;
	
	leitura(vet);
	exibeMenor(vet);
	exibeMaior(vet);
}

void leitura(int *vet){
	int i;
	
	printf("Insira 20 valores: \n");
	for(i=0; i<TAM; i++){
		scanf("%d", &vet[i]);
	}
}

void exibeMenor(int *vet){
	int i, aux;
	
	aux = vet[0];
		
	for(i=0; i<TAM; i++){						
		if(aux > vet[i]){
			aux = vet[i];
		}		
	}
	
	printf("Valor menor: %d\n", aux);
}

void exibeMaior(int *vet){
	int i, aux;
	
	aux = vet[0];
		
	for(i=0; i<TAM; i++){						
		if(aux < vet[i]){
			aux = vet[i];
		}		
	}
	
	printf("Valor maior: %d", aux);
}
