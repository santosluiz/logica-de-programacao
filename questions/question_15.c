#include <stdio.h>
#include <stdlib.h>

// 15.  Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. 
//Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e calcular a altura do prédio.

main(){
	//Declaração de Variavel
    float SuaAltura, TamanhoSuaSombra, TamanhoSobraPredio, TamanhoPredio;
    printf("ste programa calcula a altura do prédio\n");
    printf("Qual é sua altura:");
    scanf("%f", &SuaAltura);
    printf("Qual é o tamanho da sua sombra:");
    scanf("%f", &TamanhoSuaSombra);
    printf("Qual é o tamanho da sombra do prédio:");
    scanf("%f", &TamanhoSobraPredio );
    TamanhoPredio = (TamanhoSobraPredio*SuaAltura)/TamanhoSuaSombra;
    printf("A altura do predio é:%.2f", TamanhoPredio);
    return 0;	
}
