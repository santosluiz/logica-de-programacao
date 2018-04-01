#include <stdio.h>
#include <stdlib.h>

/* 75. Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais existem nesta string. */    

int contaVogais(char* str);

int main(){

	char frase[100];
	int qtd;
	
	printf("Digite uma frase: ");	
	gets(frase);
	
	qtd = contaVogais(frase);
	
	printf("\nO numero de vogais e: %d", qtd);
	
	return 0;

}

int contaVogais(char* str){

	int i=0, contador=0;
	
	for(i=0; i<100; i++){	
		if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U')){	
			contador++;	
		}	
	}
	
	return contador;

}
