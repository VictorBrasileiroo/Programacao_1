#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //ENTRADA DOS NUMEROS
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

    //UNIÃO DOS NUMEROS
    int algorismo = (a*pow(10,4)) + (b*pow(10,3)) + (c*pow(10,2)) + (d*10) + e;
    //O PALINDROMO DO NUMERO
    int palindromo = (e*pow(10,4)) + (d*pow(10,3)) + (c*pow(10,2)) + (b*10) + a;

    //VERIFICAÇÃO + OUTPUT
    if(algorismo == palindromo){
        printf("Feldspato, de um esporro no Gabro por mim");
    }else if(algorismo % 2 == 0 && algorismo % 7 != 0){
        printf("Feldspato, va para Gemeo Calido");
    }else if(algorismo % 7 == 0 && algorismo % 2 != 0){
        printf("Feldspato, va para Gemeo Cinzento");
    }else if(algorismo >= 100 && algorismo <= 49999){
        printf("Feldspato, va para Profundezas do Gigante");
    }else if(algorismo >= 50000 && algorismo <= 99999){
        printf("Feldspato, va para Vale Incerto");
    }else if(algorismo > 0 && algorismo < 3){
        printf("Feldspato, va para Abrolho Sombrio");
    }else{
        printf("Feldspato, foi um erro de leitura");
    }
    
    return 0;
}