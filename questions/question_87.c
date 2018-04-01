#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 50
/* 87. Escreva um programa em C, que coloque a string lida toda em caixa alta. */    


int main(){
  int i=0;
  char frase[TAM];  
  char c;
  
  
  printf("Digite uma frase: ");
  gets(frase);
  
  for(i=0; i<TAM; i++){
    frase[i] = toupper(frase[i]);
  }
  
  printf("%s", frase);
  
  return 0;
}
