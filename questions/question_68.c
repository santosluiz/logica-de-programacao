#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/* 68. Escreva um programa que leia um vetor de 15 posições de inteiros.
	Em seguida, o programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre no vetor. */    

void insere(int *vet);
int escolheNumero();
void valorRepetido(int *vet, int numero);

main(){
	int vet[TAM];
	int numero;
	
	insere(vet);
	system("cls");
	numero = escolheNumero();
	valorRepetido(vet, numero);
}

void insere(int *vet){
	int i;
	
	printf("Preencha o vetor com 15 inteiros: \n");
	for(i=0; i<TAM; i++){
		scanf("%d", &vet[i]);		
	}		
}

int escolheNumero(){
	int numero;
	
	printf("Digite um numero: \n");
	scanf("%d", &numero);
	
	return numero;
}


void valorRepetido(int *vet, int numero){
	int i, cont = 0;
	
	for(i=0; i<TAM; i++){
		if(numero == vet[i]){
			cont++;
		}
	}
	
	if(cont > 0){
		printf("O inteiro  %d aparece %d vez(es) no vetor.", numero, cont);	
	} else{
		printf("O inteiro  %d nao aparece no vetor.", numero, cont);
	}
	
}
