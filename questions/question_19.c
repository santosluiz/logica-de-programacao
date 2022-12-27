#include <stdio.h>
#include <stdlib.h>

//19. Escreva um programa que calcule a raiz de uma equação do primeiro grau.

main(){
	int a, b, x;
    printf("Equação: a+X=b");
    printf("Digite o valor do a:");
    scanf("%d", &a);
    printf("Digite o valor do b:");
    scanf("%d", &b);
    x = a - b;
    printf("O valor de x: %d", x);
    return 0;
}