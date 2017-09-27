#include <stdio.h>
#include <stdlib.h>

// 48.  Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não. 	

main(){
	int num, i, aux=0;
	
	printf("Digite um numero");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		if(num % i == 0){	
			aux++;
		}	
	}
		
	if(aux == 2){
		puts("e primo!");
	} else {
		puts("nao e primo!");
	}	
}
