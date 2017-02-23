#include <stdio.h>
#include <stdlib.h>

// 4. Dado os três lados de um triângulo determinar o perímetro do mesmo.

main(){
	float lado1, lado2, lado3, perimetro;
	
	printf("Insira o lado 1 do triangulo:");
	scanf("%f", &lado1); 

	printf("Insira o lado 2 do triangulo:");
	scanf("%f", &lado2);

	printf("Insira o lado 3 do triangulo:");
	scanf("%f", &lado3);
	
	perimetro = lado1 + lado2 + lado3;
	
	printf("Perimetro: %2.f", perimetro);
	
	return 0;	
}