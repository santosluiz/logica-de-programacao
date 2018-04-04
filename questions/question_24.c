#include <stdio.h>
#include <stdlib.h>

//24. Escreva um programa que leia tres numeros e mostre o maior entre eles. 
int compara(int *num);

main(){
	int numeros[3];
	int i, aux;
	
	printf("Digite 3 numeros: ");
	for(i=0; i<3; i++){
		scanf("%d", &numeros[i]);	
	}
	
	aux = compara(numeros);

}

int compara(int *num){
	int i, aux;
	
	aux = num[0];
	
	for(i=1; i<3; i++){
		if(aux < num[i]){
			aux = num[i];
		}
	}
	
	printf("O numero maior e: %d", aux);
	
}
