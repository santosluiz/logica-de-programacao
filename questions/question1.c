#include <stdio.h>
#include <stdlib.h>

// 1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

main(){
	
	float base, altura, area, perimetro;
	
	printf("Insira a base:");
	scanf("%f", &base);
	
	printf("Insira a altura:");
	scanf("%f", &altura);	
	
	area = base * altura;
	perimetro = base + base + altura + altura;
	
	printf("Area: %2.f \nPerimetro: %2.f", area, perimetro);
	
	return 0;
}