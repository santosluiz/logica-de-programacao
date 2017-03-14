#include <stdio.h>
#include <stdlib.h>

// 6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

main(){
	int num, num2, quociente, resto;
	
	printf ("Digite os valores:\n");
	scanf ("%d %d", &num, &num2);
	
	quociente = num / num2;
	resto = num % num2;
	
	printf ("O quociente da divisao e: %d\n", quociente);
	printf ("O resto da divisao e: %d\n\n", resto);
	
	return 0;
}
