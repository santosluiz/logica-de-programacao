#include <stdio.h>
#include <stdlib.h>

// 8. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius.

main(){
	
     float cel,fahr;

     printf("Digite o valor em Fahrenheit: \n");
     scanf ("%f", &fahr);

     cel = (5/9) * (fahr - 32);
     printf ("A conversao em Celsius e: %.2f\n\n", cel);
	
}
