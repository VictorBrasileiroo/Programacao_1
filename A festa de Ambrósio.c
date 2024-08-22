#include <stdio.h>

void funcao1(int valorMin, int valorMax, int qntIngressDesc, int qntIngressValorMax, int auxiliar, int MaiorLucro){
    //caso base
    if(valorMax<valorMin){
        printf("%d", MaiorLucro);
        return;
    }

    //var para calcular o lucro por cada recursão
    int lucro = (qntIngressValorMax + (qntIngressDesc * auxiliar)) * valorMax;

    //var que vai sempre analisar o lucro - e ficar com o maior lucro  
    if(lucro > MaiorLucro){
        MaiorLucro = lucro;
    }

    funcao1(valorMin,valorMax-1,qntIngressDesc,qntIngressValorMax, auxiliar + 1, MaiorLucro);
}

int main(){

    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    funcao1(a,b,c,d, 0,0);

    return 0;
}