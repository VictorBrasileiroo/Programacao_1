#include <stdio.h>

void escadinha(int contador) {
    if (contador == 0) {
        return;
    }
    escadinha(contador - 1);
    if(contador > 1){
        printf(" ");
    }
    printf("%d", contador);

    //PRIMEIRO PRINTA A ESCADINHA DEPOIS O CONTADOR 
        //EX: ESCADINHA(3) - CHAMA A ESCADINHA(2) E PRINTA 1 2 DEPOIS PRINTA O CONTADOR(3) - SERIA (1 2 3)
    
    // Primeira Chamada de somatorio: valorinicial = 1

    // escadinha(1) imprime: 1
    // Uma nova linha é adicionada.
    // Segunda Chamada de somatorio: valorinicial = 2

    // escadinha(2) chama escadinha(1) (que imprime 1) e depois imprime 2, resultando em: 1 2
    // Uma nova linha é adicionada.
    // Terceira Chamada de somatorio: valorinicial = 3

    // escadinha(3) chama escadinha(2) (que imprime 1 2) e depois imprime 3, resultando em: 1 2 3
    // Uma nova linha é adicionada.
}

void somatorio(int a, int valorinicial) {
    if (valorinicial > a) {
        return;
    }
    escadinha(valorinicial);
    printf("\n");

    somatorio(a, valorinicial + 1);
}

int main() {
    int valor;
    scanf("%d", &valor);

    somatorio(valor, 1);
    return 0;
}
