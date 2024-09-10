#include <stdio.h>

void scanArray(int qnt, int n[], int auxiliar) {
    if (auxiliar >= qnt) { 
        return; 
    }
    scanf("%d", &n[auxiliar]); 
    scanArray(qnt, n, auxiliar + 1);
}

void printArray(int qnt, int n[], int auxiliar){
    if(auxiliar >= qnt){return;}
    printf("%d\n", n[auxiliar]);
    printArray(qnt,n,auxiliar+1);
}

int contadorArray(int qnt, int n[], int auxiliar, int contador, int numero){
    if(auxiliar >= qnt){return contador;}

    if(numero == n[auxiliar]){
        contador++;
    }

    contadorArray(qnt,n,auxiliar+1,contador,numero);
}


int main() {
    int qntItens;
    scanf("%d", &qntItens);
    
    int n[qntItens];
    scanArray(qntItens, n, 0);

    int numero;
    scanf("%d", &numero);

    printf("\n");

    int resultado = contadorArray(qntItens,n,0,0,numero);
    printf("O número %d aparece %d vezes\n", numero,resultado);
    
    return 0;
}