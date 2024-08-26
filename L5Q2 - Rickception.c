#include <stdio.h>

void ricketon(int a, int b, int auxiliar, int operacao) {
    if (auxiliar >= b) {
        printf("%d", operacao);
        return;
    }
    if (auxiliar % 2 == 0) {
        operacao = a + 3;
    } else {
        operacao = a + (a % 5);
    }
    ricketon(operacao, b, auxiliar + 1,operacao);
}

int main() {
    int valorInicial, quantidadeDePassos;
    scanf("%d%d", &valorInicial, &quantidadeDePassos);
    ricketon(valorInicial, quantidadeDePassos, 0,0);
    return 0;
}
