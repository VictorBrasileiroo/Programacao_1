#include <stdio.h>
#include <math.h>
#include <string.h>

int escolhendoLetra(int valorA, int valorB, int valorC, int valorD, char escolhaPessoa){
    switch (escolhaPessoa){
    case 'a':
        return valorA;
    case 'b':
        return valorB;
    case 'c':
        return valorC;
    case 'd':
        return valorD;
    default:
        return 0;
    }
}

int main(){

    //INPUT
        //4 VALORES INTEIROS - NUMEROS DE CADA JOGADOR (AND,GUI,RIT,HIG)
        //4 LETRAS DE CADA JOGADOR - (A,B,C,D)
        //4 VALORES INTEIROS PARA AS LETRAS - LETRAR DE LETRAS IGUAIS
        
        int numAnd, numGui, numRit, numHig;
        char letraAnd, letraGui, letraRit, letraHig;
        int valorA, valorB, valorlC, valorlD;

        scanf("%d%d%d%d %c %c %c %c %d%d%d%d", &numAnd, &numGui, &numRit, &numHig, &letraAnd, &letraGui, &letraRit, &letraHig, &valorA, 
        &valorB, &valorlC, &valorlD);

        //AQUI SERVE PARA DENOMINAR O VALOR DAS LETRAS - AJUDA A N TER LETRAS COM REPETIÇÕES - VALORES DAS LETRAS
        int letraAnderson = escolhendoLetra(valorA,valorB,valorlC,valorlD,letraAnd);
        int letraGuilherme = escolhendoLetra(valorA,valorB,valorlC,valorlD,letraGui);
        int letraRita = escolhendoLetra(valorA,valorB,valorlC,valorlD,letraRit);
        int letraHigor = escolhendoLetra(valorA,valorB,valorlC,valorlD,letraHig);

        // printf("%d %d %d %d", letraAnderson, letraGuilherme, letraRita, letraHigor);

    //CALCULO
        //MEDIA DOS NUMEROS
        int mediaNumeros = (numAnd + numGui + numHig + numRit) / 4;


        //PONTUAÇÃO FINAL DE CADA UM
        int potuacaoAnd, pontuacaoGui, pontuacaoRit, pontuacaoHig;
        
        //CALCULO DOS FATORES E PONTUAÇÃO
        if (mediaNumeros >= 0 && mediaNumeros <= 10)
        {
            potuacaoAnd = numAnd + letraAnderson + (letraAnderson * 0.4);
            pontuacaoGui = numGui + letraGuilherme + (letraGuilherme * 0.4);
            pontuacaoRit = numRit + letraRita + (letraRita * 0.4);
            pontuacaoHig = numHig + letraHigor + (letraHigor * 0.4);  
        } else if(mediaNumeros > 10 && mediaNumeros <= 30){
            potuacaoAnd = numAnd + letraAnderson + (letraAnderson * 0.6);
            pontuacaoGui = numGui + letraGuilherme + (letraGuilherme * 0.6);
            pontuacaoRit = numRit + letraRita + (letraRita * 0.6);
            pontuacaoHig = numHig + letraHigor + (letraHigor * 0.6);
        } else if(mediaNumeros > 30 && mediaNumeros <= 60){
            potuacaoAnd = numAnd + letraAnderson + (letraAnderson * 0.8);
            pontuacaoGui = numGui + letraGuilherme + (letraGuilherme * 0.8);
            pontuacaoRit = numRit + letraRita + (letraRita * 0.8);
            pontuacaoHig = numHig + letraHigor + (letraHigor * 0.8);
        }else{
            potuacaoAnd = numAnd + letraAnderson + letraAnderson;
            pontuacaoGui = numGui + letraGuilherme + letraGuilherme;
            pontuacaoRit = numRit + letraRita + letraRita;
            pontuacaoHig = numHig + letraHigor + letraHigor;
        }
        // printf("%d %d %d %d", potuacaoAnd, pontuacaoGui, pontuacaoRit, pontuacaoHig);

    //OUTPUT
        if(potuacaoAnd < pontuacaoGui && potuacaoAnd < pontuacaoRit && potuacaoAnd < pontuacaoHig){
            printf("Anderson quem vai pagar o lanche!:D");
        }else if(pontuacaoGui < potuacaoAnd && pontuacaoGui < pontuacaoRit && pontuacaoGui < pontuacaoHig){
            printf("Guilherme quem vai pagar o lanche!:D");
        }else if(pontuacaoRit < potuacaoAnd && pontuacaoRit < pontuacaoGui && pontuacaoRit < pontuacaoHig){
            printf("Rita quem vai pagar o lanche!:D");
        }else if(pontuacaoHig < potuacaoAnd && pontuacaoHig < pontuacaoGui && pontuacaoHig < pontuacaoRit){
            printf("Higor quem vai pagar o lanche!:D");
        }
        
    return 0;
}
