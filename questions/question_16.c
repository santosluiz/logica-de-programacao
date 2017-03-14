#include <stdio.h>
#include <stdlib.h>

//16.  Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894). 

main(){

	int num, Inum, cont, digito1, digito2, digito3;
	
	printf ("Digite um numero de 3 digitos a ser invertido:\n");
	scanf ("%d", &num);
		
	if (num > 99 && num <= 999){
		
		cont = num / 100;
		digito1 = cont;
		cont = 0;
		cont = num % 100;
		digito2 = cont / 10;
		digito3 = num % 10;
	
		printf ("O numero invertido e: %d%d%d", digito3,digito2,digito1);
		
	}else{
		printf ("Numero Invalido");	
	}
	
	return 0;
}
