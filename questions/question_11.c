#include <stdio.h>
#include <stdlib.h>

// 11. Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é  obtida pela média aritmética entre a nota de 2 bimestres. 
//     Cada nota de bimestre é composta por 2 notas de provas.  

main(){
	float p1, p2, bimestre1, bimestre2, semestre;
    printf("Qual foi a nota da P1 do 1° bimestre:");
    scanf("%f", &p1);
    printf("Qual foi a nota da P2 do 1° bimestre:");
    scanf("%f", &p2);
    bimestre1 = (p1 + p2) / 2;
    printf("Qual foi a nota da P1 do 2° bimestre:");
    scanf("%f", &p1);
    printf("Qual foi a nota da P2 do 2° bimestre:");
    scanf("%f", &p2);
    bimestre2 = (p1 + p2) / 2;
    semestre = (bimestre1 + bimestre2) / 2;
    printf("A nota semestral foi: %.2f", semestre);
}