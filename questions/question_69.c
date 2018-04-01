#include <stdio.h>
#include <stdlib.h>

/* 69. Escreva um programa que carregue um array com tamanho variável. O tamanho máximo do array é de 100 posições. */    

main(){
	int *array;
	int tam;
	
	printf("Insira a quantidade de posicoes do array: ");
	scanf("%d", &tam);		
	
	while(tam == 0 || tam > 100){
		system("cls");
		printf("Valor invalido.\n");		
		printf("Insira a quantidade de posicoes do array: ");
		scanf("%d", &tam);	
	}
	
	array = (int *) malloc(tam * sizeof(int));
	printf("Seu vetor tem: %d posicoes", tam);
}
