#include <stdio.h>

void caminharDoElemento(int qntPassos, int x, int y, int auxiliar,int contador, int reino){
    if(qntPassos == 0){
        printf("%d\n", contador);
        return;
    }

    char orientacao;
    scanf(" %c", &orientacao);

    if(orientacao == 'D'){
        x++;
    }
    if(orientacao == 'C'){
        y++;
    }

    if(x>y){
        reino = 1;
    }else if(x<y){
        reino = 2;
    }else{
        reino = reino;
    }

    if(auxiliar != reino && auxiliar!= 0){
        contador++;
    }

    auxiliar = reino;
    
    //Recursão da caminharDoElemento
    caminharDoElemento(qntPassos-1,x,y,auxiliar,contador,reino);
}

int main(){
    int valor;
    scanf("%d", &valor);
    caminharDoElemento(valor,0,0,0,0,0);
    return 0;
}