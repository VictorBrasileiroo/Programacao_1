#include <stdio.h>

int analiseDoPh(){
    //cria uma variável - ela vai mudar toda vez que chamar a função  
    double ph;
    //scan dessa variável
    scanf("%lf",&ph);
    //Aqui fica o macete - assim a gente consegue scanf sem precisar colocar dentro de um array ou loop - pois ela vai scanf toda vez que fizer a recursão - o ultimo scan será quando der o caso base

    //caso base - ph == -1
    if(ph == -1){
        return 0;
    }
    //recursão
    else{
        if(ph<7){
            printf("ACIDA\n");
        }else if(ph>7){
            printf("BASICA\n"); 
        }else{
            printf("NEUTRA\n");
        }

        //chamando ela mesma novamente
        analiseDoPh();
    }
}
int main(){
    //aqui já inicia chamando a função - pois não teria como fazer os scans
    analiseDoPh();
    return 0;
}