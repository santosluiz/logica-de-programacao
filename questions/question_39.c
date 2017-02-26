#include <stdio.h>
#include <stdlib.h>

/* 39. Em diversas situações, é útil o uso de dígitos verificadores. Dígito verificador ou algarismo de controle é um mecanismo de autenticação utilizado 
	para verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes ou erros de transmissão ou digitação. 
	
	Uma das formas mais comuns de cálculo de dígito verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é feito, é feito como se segue: 
	para calcular o primeiro dígito verificador, cada dígito do número, começando da direita para a esquerda (do dígito menos significativo para o dígito 
	mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim sucessivamente, até o primeiro dígito do número. 
	
	O somatório dessas multiplicações dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é o dígito verificador.
	
	O Banco do Brasil utiliza o código módulo 11, substituindo por X o valor do dígito verificador quando este é 10. 

	Escreva um programa que receba um número com os 4 primeiros dígitos de uma agência e imprima o número da agência completo (numero – dv). 

	Veja a tabela aqui:: http://imgur.com/Mtzzwq4


*/    

main(){
	
}