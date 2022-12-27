#include <stdio.h>
#include <stdlib.h>

// 14.  Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
//semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre eles. 
//Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para percorrer essa distância. 
//Para que encontre o próximo semáforo aberto, este deve abrir um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes informações:

//a) A distância desde o semáforo anterior; 
//b) A velocidade permitida da via;
//c) A aceleração típica dos carros;


main(){
	float dist, vmax, acel, dac, dconst, base, tempo1, tempo2, temposem;
    printf("Este programa faz sincronizar os semáforos");
    printf("Qual a distância entre o os semáforos em metros:");
    scanf("%f", &dist);
    printf("Qual a velocidade máxima da via:");
    scanf("%f", &vmax);
    printf("Qual a aceleração média do carro:");
    scanf("%f", &acel);
    vmax = vmax/3.6; //conversão de Km/h 
    tempo1 = (max/acel); //calculo do tempo em que o carro demora para chegar à velocidade máxima da via (v = v0 + a . t)
    dac = (acel*(tempo1*tempo2))/2;//descobrindo a distância percorrida durante esta aceleração (S = S0 + v0 . t + a . t²/2)
    if(dac<dist){
        dconst = dist - dac;
        tempo2 = (dconst/vmax);//(s = s0 + v*t)
        temposem = tempo1+tempo2-3;
    }else{
        if(dac>dist){//caso a distância percorrida durante a aceleração seja maior que a distância até o próximo farol, deve-se saber o tempo necessário para que ele o atinja com base na distância entre os dois faróis.
            base = (((dac*2)/acel)**0.5)//(S = S0 + v0 . t + a . t²/2)
            temposem = temposem -3;
        }else{//caso a distância percorrida durante a aceleração seja a mesma que a distância entre os faróis, o tempo de aceleração até a velocidade máxima da pista é o mesmo que o de chegada ao farol.
            temposem = tempo1-3;
        }
    }
    printf("Dadas as informações inseridas, o semaforo deve abrir após %.2f segundos.", temposem);
}
