#include <stdio.h>

//Se ambos os números, a e b, forem primos, ele os soma.

// 2 - Se a e b não forem primos, ele faz o somatório dos dígitos de cada um e os multiplica

int ehPrimo(int a, int auxiliar, int contador) {
    if (auxiliar > a / 2) {
        return (contador == 0) ? 1 : 0;
    }

    if (a % auxiliar == 0) {
        contador++;
    }

    return ehPrimo(a, auxiliar + 1, contador);
}

int somarDigitos(int numero) {
    if (numero == 0) {
        return 0;
    }
    return (numero % 10) + somarDigitos(numero / 10);
}

int function(int n, int qntRodadas){
    if(qntRodadas == 0){
        return n;
    }

    int valores;
    scanf("%d", &valores);

    int resultadoN1 = ehPrimo(n,2,0);
    int resultadoN2 = ehPrimo(valores,2,0);

    if(resultadoN1 == 1 && resultadoN2 == 1){
        n += valores;
    }else{
        int somaN1N2 = somarDigitos(n) * somarDigitos(valores);
        n = somaN1N2;
    }

    function(n,qntRodadas-1);
}

int main() {
    int qntManipulacoes, n;
    scanf("%d", &qntManipulacoes, &n);
    int resultado = function(n,qntManipulacoes);
    printf("%d", resultado);
    return 0;
}
