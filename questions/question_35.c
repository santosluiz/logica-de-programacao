#include <stdio.h>
#include <stdlib.h>

/* 35.  Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, sendo domingo o dia de número 1. 
		Se o número não corresponder a um dia da semana, mostre uma mensagem de erro. 
*/

main(){
	int numero;
	
	printf("Digite um numero de 1 a 7:");
	scanf("%d", &numero);
	
	switch(numero){
		
		case 1: {
			puts("Domingo");
			break;
		}
		
		case 2:{
			puts("Segunda-feira");
			break;
		}

		case 3:{
			puts("Terça-feira");
			break;
		}
		
		case 4:{
			puts("Quarta-feira");
			break;
		}
		
		case 5:{
			puts("Quinta-feira");
			break;
		}
		
		case 6:{
			puts("Sexta-feira");
			break;
		}	
		
		case 7:{
			puts("Sabado");
			break;
		}									
		
		default:{
			puts("Numero invalido");
			break;
		}
	}	
}
