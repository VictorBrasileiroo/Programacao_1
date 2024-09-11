void bubbleSortRec(int n[], int qnt, int auxiliar) {
    // Caso base: se n for 1 ou o índice for maior ou igual a n-1, a ordenação está completa
    if (qnt == 1 || auxiliar >= qnt - 1) {
        if (qnt > 1) {
            // Chama a função recursiva para o próximo nível com um array menor
            bubbleSortRec(n, qnt - 1, 0);
        }
        return;
    }

    // Se o elemento atual é maior que o próximo, troca-os
    if (n[auxiliar] > n[auxiliar + 1]) {
        int temp = n[auxiliar];
        n[auxiliar] = n[auxiliar + 1];
        n[auxiliar + 1] = temp;
    }

    // Chama a função recursiva para o próximo par de elementos
    bubbleSortRec(n, qnt, auxiliar + 1);
}