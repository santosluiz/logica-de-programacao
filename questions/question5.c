#include <stdio.h>
#include <stdlib.h>

// 5. Ler um número inteiro e exibir o seu sucessor.

main(){
	
	int numero, sucessor;
	
	printf("Insira um numero inteiro:");
	scanf("%d", &numero);
	
	sucessor = numero + 1;
	
	printf("Numero digitado: %d \nNumero sucessor: %d", numero, sucessor);
	
	return 0;
}