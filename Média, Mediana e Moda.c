#include <stdio.h>

void scanArray(int qnt, int auxiliar, int n[]) {
    if (auxiliar >= qnt) { 
        return; 
    }
    scanf("%d", &n[auxiliar]); 
    scanArray(qnt,auxiliar + 1,n);
}

void bubbleSortRec(int n[], int qnt, int auxiliar) {
    if (qnt == 1 || auxiliar >= qnt - 1) {
        if (qnt > 1) {
            bubbleSortRec(n, qnt - 1, 0);
        }
        return;
    }
    if (n[auxiliar] > n[auxiliar + 1]) {
        int temp = n[auxiliar];
        n[auxiliar] = n[auxiliar + 1];
        n[auxiliar + 1] = temp;
    }
    bubbleSortRec(n, qnt, auxiliar + 1);
}

float mediaArray(int qnt, int auxiliar, int n[], float somatorio){
    if (auxiliar >= qnt) { 
        float media = somatorio/qnt;
        return media; 
    }
    somatorio += n[auxiliar];

    return mediaArray(qnt,auxiliar+1,n,somatorio);
}

float medianaArray(int qnt, int auxiliar, int n[]){
   if(qnt%2 == 0){
        return n[qnt/2];
    }else{
        float medianaImpar = (n[qnt/2] + n[qnt/2 + 1])/2;
        return medianaImpar;
    }
}

float modaArray(int qnt, int auxiliar, int n[], float contador, float moda, int MaxCount){
    if(auxiliar > qnt){
        return moda;
    }

   int contadorElementos = verificadorArray(n[auxiliar],n,qnt,0,0);
   
    if(contadorElementos > MaxCount){
        MaxCount = contadorElementos;
        moda = n[auxiliar];
    }else if(contadorElementos == MaxCount && n[auxiliar] > moda){
        moda = n[auxiliar];
    }

   return modaArray(qnt,auxiliar+1,n,contador,moda, MaxCount);
}

int verificadorArray(int elemento ,int n[], int qnt, int auxiliar, int contador){
    if(auxiliar > qnt){
        return contador;
    }
    if(elemento == n[auxiliar]){
        contador++;
    }

    return verificadorArray(elemento,n,qnt,auxiliar+1,contador);
}

int main(){
    int qnt;
    scanf("%d", &qnt);

    int n[qnt]; //criação do array

    scanArray(qnt,0,n); //scan do array
    bubbleSortRec(n,qnt,0); //Ordena o Array

    float mediaValor = mediaArray(qnt,0,n,0); //faz a média
    float medianaValor = medianaArray(qnt,0,n); //faz a mediana - não é uma recursão
    float modaValor = modaArray(qnt,0,n,0,0,0);

    printf("%.2f %.2f %2.f", mediaValor, medianaValor, modaValor);
    return 0;
}