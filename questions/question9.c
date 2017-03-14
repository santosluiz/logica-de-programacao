#include <stdio.h>
#include <stdlib.h>

// 9. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.

main(){
	
     float PI = 3.14, volume, raio, altura;
     
     printf("Digite o raio: \n");
     scanf ("%f", &raio);
     printf("Digite a altura: \n");
     scanf ("%f", &altura);
     
     volume = altura * PI *(raio * raio);
     printf ("O valor do volume e: %.2f\n\n", volume);	
}
