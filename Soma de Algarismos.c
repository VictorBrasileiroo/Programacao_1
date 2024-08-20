#include <stdio.h>
int somarDigitos(int numero) {
    if (numero == 0) {
        return 0;
    }
    return (numero % 10) + somarDigitos(numero / 10);
}
int main(){
    int algarismo;
    scanf("%d", &algarismo);
    int resultado = somarDigitos(algarismo);
    printf("%d", resultado);
    return 0;
}