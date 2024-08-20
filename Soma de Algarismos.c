#include <stdio.h>
int somarDigitos(int numero) {
    if (numero == 0) {
        return 0;
    }
    //aqui ele soma o ultimo numero com a recursão dos outros 3 numeoros
        // ex: 1234 - 4 + somarDigitos(123)
        // 3 + somarDigitos(12)
        // 2 + somarDigitos(1)
        // somarDigitos(1) = 1 + 0
        //2 + 1 = 3
        //3 + 3 = 6
        //4 + 6 = 10
    return (numero % 10) + somarDigitos(numero / 10);
}
int main(){
    int algarismo;
    scanf("%d", &algarismo);
    int resultado = somarDigitos(algarismo);
    printf("%d", resultado);
    return 0;
}
