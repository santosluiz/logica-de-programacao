#include <stdio.h>
#include <stdlib.h>

// 10. Converter um inteiro informado menor que 32 para sua representação em binário.

main(){
	
     int inteiro, bin,i,num;
     
     printf("Digite um numero inteiro MENOR que 32: \n");
     scanf ("%d", &inteiro);
     if (inteiro <= 32){
     	printf ("O numero em binario e:\n");
     	for (i = 0; i < inteiro ; i++){
     	    bin = inteiro % 2;
     	    printf ("%d",bin);
     	}
     }else{
	printf ("Numero Invalido.\n\n");	
     }
	
   return 0;
}
