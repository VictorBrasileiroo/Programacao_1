#include <stdio.h>
int cirurgiaoDeNumeros(int a){
    if(a == 0){
        return 0; //Precisa ser return 0 para ele conseguir fazer a arvore
    }
    return (a%10) + cirurgiaoDeNumeros(a/10);
}
void function(int numero, int valor, int auxiliar, int contador){
    if(auxiliar > numero){
        printf("Numbers: %d", contador);
        return;
    }
    int resultado = cirurgiaoDeNumeros(auxiliar); //989
    if(resultado == valor){
        printf("%d\n", auxiliar);
        contador++;
    }
    function(numero,valor,auxiliar+1,contador);
}
int main(){
    int n,k;
    scanf("%d%d", &n,&k);
    function(n,k,0,0);
    return 0;
}