#include <stdio.h>

int calculo(int valor, int contador) {
    if (valor == 1) {
        return contador;
    }

    if (valor % 2 == 0) {
        valor = valor / 2;
    } else {
        valor = valor * 3 + 1;
    }

    return calculo(valor, contador + 1);
}

int f1(int a, int b) {
    if (a > b) {
        return;
    }

    int atual = calculo(a, 1);
    int restante = f1(a + 1, b);

    if (atual > restante) {
        return atual;
    } else {
        return restante;
    }
}

void scan() {
    int i, j;
    if (scanf("%d %d", &i, &j) != EOF) {
        int inicio, fim;

        if (i < j) {
            inicio = i;
            fim = j;
        } else {
            inicio = j;
            fim = i;
        }

        int ciclo = f1(inicio, fim);
        printf("%d %d %d\n", i, j, ciclo);
        scan();
    }
}

int main() {
    scan(); 
    return 0;
}
