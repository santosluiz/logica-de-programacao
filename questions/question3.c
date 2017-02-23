#include <stdio.h>
#include <stdlib.h>

// 3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

main(){

	float raio, area, perimetro, pi = 3.14;
	
	printf("Insira o raio da circunferencia:");	
	scanf("%f", &raio);
	
	area = pi * (raio * raio);
	perimetro = 2 * pi * raio;
	
	printf("Area: %2.f \nPerimetro: %2.f", area, perimetro);
	
	return 0;
}