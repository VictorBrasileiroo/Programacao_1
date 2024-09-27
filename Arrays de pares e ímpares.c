#include <stdio.h>

void scanArray(int qnt, int auxiliar, int n[]) {
    if (auxiliar >= qnt) {
        return;
    }
    scanf("%d", &n[auxiliar]);
    scanArray(qnt, auxiliar + 1, n);
}

void printArray(int qnt, int n[], int auxiliar, char caracter) {
    if (auxiliar >= qnt) {
        return;
    }
    if (caracter == 'p') {
        printf("par[%d] = %d\n", auxiliar, n[auxiliar]);
    } else if (caracter == 'i') {
        printf("impar[%d] = %d\n", auxiliar, n[auxiliar]);
    }
    printArray(qnt, n, auxiliar + 1, caracter);
}

void analise(int qnt, int auxiliar, int n[], int contPar, int contImpar, int par[], int impar[]) {
    if (auxiliar >= qnt) {
        printArray(contImpar, impar, 0, 'i');  
        printArray(contPar, par, 0, 'p');  
        return;
    }

    if (n[auxiliar] % 2 == 0) {  
        par[contPar] = n[auxiliar];
        contPar++;

        if (contPar == 5) {
            printArray(5, par, 0, 'p');
            contPar = 0;  
        }
    } else { 
        impar[contImpar] = n[auxiliar];
        contImpar++;

        if (contImpar == 5) {
            printArray(5, impar, 0, 'i');
            contImpar = 0;  
        }
    }

    analise(qnt, auxiliar + 1, n, contPar, contImpar, par, impar);
}

int main() {
    int n[15], par[5], impar[5];

    scanArray(15, 0, n);
    analise(15, 0, n, 0, 0, par, impar);

    return 0;
}
