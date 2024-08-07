#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    //INPUT
        //4 VALORES INTEIROS - NUMEROS DE CADA JOGADOR (AND,GUI,RIT,HIG)
        //4 LETRAS DE CADA JOGADOR - (A,B,C,D)
        //4 VALORES INTEIROS PARA AS LETRAS - LETRAR DE LETRAS IGUAIS
        
        int numAnd, numGui, numRit, numHig;
        char letraAnd, letraGui, letraRit, letraHig;
        int valorleAnd, valorleGui, valorleRit, valorleHig;

        scanf("%d%d%d%d %c %c %c %c %d%d%d%d", &numAnd, &numGui, &numRit, &numHig, &letraAnd, &letraGui, &letraRit, &letraHig, &valorleAnd, 
        &valorleGui, &valorleRit, &valorleHig);

    //CALCULO
    
    int mediaNumeros = (numAnd + numGui + numHig + numRit) / 4;


    //OUTPUT

    return 0;
}