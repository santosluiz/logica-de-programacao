#include <stdio.h>
#include <stdlib.h>

// 1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

main(){
	
	float base, altura, area, perimetro;
	
	printf("Insira a base do retângulo:\n");
	scanf("%f", &base);
	system("cls");
	
	printf("Insira a altura do retângulo:\n");
	scanf("%f", &altura);
	system("cls");
	
	area = base * altura;
	perimetro = base + base + altura + altura;
	
	printf("Area: %2.f \nPerimetro: %2.f", area, perimetro);
	
	return 0;
}
