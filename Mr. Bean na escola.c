#include <stdio.h>
#include <stdbool.h>

int ehPrimo(int a, int b) {
    if (a <= 1) return 0;
    if (b * b > a) return 1;
    if (a % b == 0) return 0;
    return ehPrimo(a, b + 1);
}

int cousinNext(int a, int b) {
    if (ehPrimo(a-1, b)) {
        return a-1;
    }
    return cousinNext(a - 1, 2);
}

void function(int n, int maiorPar, int menorImpar){
    if(n == 0){
        if(maiorPar != 0){
            printf("Maior par: %d\n", maiorPar);
            printf("Primo anterior ao maior: %d\n", cousinNext(maiorPar,2));
        }else{
            printf("Sem numeros pares\n");
        }

        if(menorImpar != 999999){
            printf("Menor impar: %d\n", menorImpar);
            printf("Primo anterior ao menor: %d\n", cousinNext(menorImpar,2));
        }else{
            printf("Sem numeros impares\n");
        }
        return;
    }

    int num;
    scanf("%d", &num);

    if(num%2 == 0 && num > maiorPar){
        maiorPar = num;
    }

    if(num%2 != 0 && num < menorImpar){
        menorImpar = num;
    }

    function(n-1,maiorPar,menorImpar);
}

int main(){
    int valor;
    scanf("%d", &valor);
    function(valor,0,999999);
    return 0;
}
