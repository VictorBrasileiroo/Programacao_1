#include <stdio.h>

void scanArray(int qnt, int auxiliar, float n[], char c[]) {
    if (auxiliar >= qnt) { 
        return; 
    }
    scanf("%f %c", &n[auxiliar], &c[auxiliar]); 
    scanArray(qnt, auxiliar + 1, n, c);
}

void printArray(int qnt, float n[], int auxiliar){
    if (auxiliar >= qnt) {
        printf("\n"); 
        return;
    }
    printf("%.2f", n[auxiliar]);
    if(auxiliar < qnt - 1){
        printf(" ");
    }
    printArray(qnt, n, auxiliar + 1);
}

int function(int qnt, int aux, float notas[], char curso[], float ec[], float cc[], int contE, int contC, char caracter) {
    if (aux >= qnt) { 
        if(caracter == 'g'){
            return contE;
        }else if(caracter == 's'){
            return contC;
        } 
    }

    if (curso[aux] == 'c') {
        cc[contC] = notas[aux];
        contC++;
    }

    if (curso[aux] == 'e') {
        ec[contE] = notas[aux];
        contE++;
    }
    
    function(qnt, aux + 1, notas, curso, ec, cc, contE, contC,caracter); 
}

void inversoBubbleSortRec(float n[], int qnt, int auxiliar) {
    if (qnt == 1 || auxiliar >= qnt - 1) {
        if (qnt > 1) {
            inversoBubbleSortRec(n, qnt - 1, 0);
        }
        return;
    }
    if (n[auxiliar] < n[auxiliar + 1]) {
        float temp = n[auxiliar];
        n[auxiliar] = n[auxiliar + 1];
        n[auxiliar + 1] = temp;
    }
    inversoBubbleSortRec(n, qnt, auxiliar + 1);
}


int main() {
    float notas[10];
    char curso[10];
    float ec[10], cc[10]; //Posso criar arrays de tamanhos que n irei usar todos

    scanArray(10, 0, notas, curso);

    int contE = function(10, 0, notas, curso, ec, cc, 0, 0,'g');
    int contC = function(10, 0, notas, curso, ec, cc, 0, 0,'s');

    inversoBubbleSortRec(ec, contE, 0); //na hora de ordenar ordena o tamanhp do array qye usou
    inversoBubbleSortRec(cc, contC, 0); 

    printf("EC: ");
    printArray(contE, ec, 0); //qnt vira os contadores
    
    printf("CC: ");
    printArray(contC, cc, 0);

    return 0;
}
