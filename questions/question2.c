#include <stdio.h>
#include <stdlib.h>

// 2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

main(){

	float lado, area, perimetro;
	
	printf("Insira o lado do quadrado:");
	scanf("%f", &lado);
	
	area = lado * lado;
	perimetro = lado * 4;
	
	printf("Area: %2.f\nPerimetro: %2.f", area, perimetro);

	return 0;	
}