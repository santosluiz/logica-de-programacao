#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 76. Escreva um programa em C, que leia uma string, gere uma nova string com o texto invertido e imprima esta nova string. */    

int main(){

	char textoOriginal[50], copia[50];
	int i, inverte;

	printf("Digite seu nome: ");
	gets(textoOriginal);

	inverte = strlen(textoOriginal) - 1;
		
	for(i=0; i<strlen(textoOriginal); i++){
		copia[inverte] = textoOriginal[i];
		inverte--;
	}

	copia[i] = '\0';

	printf("%s\n", copia);
	
	return 0;

}
