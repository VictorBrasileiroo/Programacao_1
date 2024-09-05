#include <stdio.h>

//valor da quantidadde de verificações -> v
//qnt de bits -> qntB -> função para quando de scan quando qntB for 0
//contador de maior

int verificacaoBits(int qnt, int bitAtual, int contador, int maiorSeq) {
    if (qnt == 0) {
        return maiorSeq > contador ? maiorSeq : contador;
    }

    int novoBit;
    scanf("%d", &novoBit); 

    if (novoBit != bitAtual) {
        contador++;  
    } else {
        if (contador > maiorSeq) { //Aqui ele precisa armazenra qual foi a sequência pq se n tiver isso ele vai considerar a ultima sequencia como a maior
            maiorSeq = contador; 
        }
        
        contador = 1; //reseta no 1 pq se todos forem iguais conta como 1 sequencia
    }

    bitAtual = novoBit; 

    return verificacaoBits(qnt - 1, bitAtual, contador, maiorSeq);
}

scan(int a,int contaodr){
    if(a == 0){
        printf("%d", contaodr);
        return;
    }
    int qntB;
    scanf("%d", &qntB);
    int resultado = verificacaoBits(qntB,-1,0,0);
    if(resultado > contaodr){
        contaodr = resultado;
    }
    scan(a-1,contaodr);
}

int main(){
    int v;
    scanf("%d", &v);
    scan(v,0);
    return 0;
}