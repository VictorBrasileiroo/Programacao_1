#include <stdio.h>

//A quantidade de operações é flexivel --> então vamos trabalhar com algo mais ou menos assim

void scanArray(int qnt, int auxiliar, int n[]) {
    if (auxiliar >= qnt) { 
        return; 
    }
    scanf("%d", &n[auxiliar]); 
    scanArray(qnt,auxiliar + 1,n);
}

void printArray(int qnt, int n[], int auxiliar)
{
    if (auxiliar >= qnt)
    {
        printf("\n");
        return;
    }
    printf("%d", n[auxiliar]);
    if (auxiliar < qnt - 1)
    {
        printf(" ");
    }
    printArray(qnt, n, auxiliar + 1);
}

void bubbleSortRec(int n[], int qnt, int auxiliar) {
    if (qnt == 1 || auxiliar >= qnt - 1) {
        if (qnt > 1) {
            bubbleSortRec(n, qnt - 1, 0);
        }
        return;
    }
    if (n[auxiliar] > n[auxiliar + 1]) {
        float temp = n[auxiliar];
        n[auxiliar] = n[auxiliar + 1];
        n[auxiliar + 1] = temp;
    }
    bubbleSortRec(n, qnt, auxiliar + 1);
}

void inversoBubbleSortRec(int n[], int qnt, int auxiliar) {
    if (qnt == 1 || auxiliar >= qnt - 1) {
        if (qnt > 1) {
            inversoBubbleSortRec(n, qnt - 1, 0);
        }
        return;
    }
    if (n[auxiliar] < n[auxiliar + 1]) {
        int temp = n[auxiliar];
        n[auxiliar] = n[auxiliar + 1];
        n[auxiliar + 1] = temp;
    }
    inversoBubbleSortRec(n, qnt, auxiliar + 1);
}

void function(int qnt, int aux){
    if(aux >= qnt){
        return;
    }
    {
        //criar o array
        int array[10];
        //scan o array
        scanArray(10,0,array);
        //print do valor da turma 
        printf("turma %d:\n", aux+1);
        //Ordena -> crescente
        bubbleSortRec(array,10,0);
        //Print crescente
        printArray(10,array,0);
        //Ordena -> decrescente
        inversoBubbleSortRec(array,10,0);
        //print decrescente
        printArray(10,array,0);
    }

    function(qnt,aux+1);
}

int main(){
    int qnt;
    scanf("%d", &qnt);
    function(qnt,0);
    return 0;
}
