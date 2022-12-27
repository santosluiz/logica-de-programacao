#include <stdio.h>
#include <stdlib.h>

//17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. 
// Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor fossem distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00.
// Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima (considere existir notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).

main(){
	int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0, saque;
    printf("Qual valor deseja sacar:");
    scanf("%d", &saque);
    while(saque >= 100){
        nota100+=1;
        saque = saque - 100;
    }while(saque >= 50){
        nota50+=1;
        saque = saque - 50;
    }while(saque >=  20){
        nota20+=1;
        saque = saque - 20;
    }while(saque >= 10){
        nota10+=1;
        saque = saque - 10;
    }while(saque >= 5){
        nota5+=1;
        saque = saque - 5;
    }while(saque >= 2 ){
        nota2+=1;
        saque = saque - 2;
    }while(saque >= 1){
        nota1+=1;
        saque = saque - 1;
    }
    printf("Notas de 100: %d Notas de 50: %d Notas de 20: %d Notas de 10: %d Notas de 5: %d Notas de 2: %d Notas de 1: %d", nota100, nota50, nota20, nota10, nota5, nota2, nota1);
}
