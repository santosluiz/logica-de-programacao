#include <stdio.h>
#include <stdlib.h>

// 12. Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6. 

main(){
	
	float velocidade_ms, velocidade_km, calc;
	
	printf("Insira a velocidade em m/s:");
	scanf("%f", &velocidade_ms);
	
	velocidade_km = velocidade_ms * 3.6;
	
	printf("%2.fm/s equivalem a %2.fkm/h", velocidade_ms, velocidade_km);

	return 0;	
}