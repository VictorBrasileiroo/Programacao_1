#include <stdio.h>
#include <math.h>

int rodadasBatalha(int classepedro, int classetulio, double vidapedro, double vidatulio, double ataquepedro, double ataquetulio){

    int vencedorDaRodada; 
    
    if(classepedro == 1 && classetulio == 3){
        vidatulio *= 1.3;
    }else if(classepedro == 3 && classetulio == 1){
        vidatulio *= 1.3;
    //BONUS 2 - ARQUEIRO E MAGO
    }else if(classepedro == 3 && classetulio == 2){
        ataquepedro *= 1.25;
    }else if(classepedro == 2 && classetulio == 3){
        ataquetulio *= 1.25;
    //BONUS 3 - MAGO E GUERREIRO
    }else if(classepedro == 2 && classetulio == 1){
        ataquepedro *= 1.15;
        vidatulio *= 1.15;
    }else if(classepedro == 1 && classetulio == 2){
        ataquetulio *= 1.15;
        vidatulio *= 1.15;
    }else{
        //NÃO FAZ NADA
    }
    //ATACANDO QUEM TEM A MENOR VIDA
    //PEDRO SENDO O QUE TEM MENOR VIDA E COMECANDO ATAACANDO
    if(vidatulio < vidatulio || vidatulio == vidatulio){
        //VIDA DO TULIO LEVANDO O ATAQUE  
        vidatulio -= ataquepedro;
        //VERIFICANDO SE A CARTA DO TULIO MORREU
        if(vidatulio <= 0){
            vencedorDaRodada = 1;
        //SE A CARTA DE TULIO N MORREU AI A VAMOS PARA O ATAQUE DO TULIO 
        }else{
            vidatulio -= ataquetulio;
            //VERIFICANDO A VIDA DO PEDRO
            if(vidatulio <= 0){
                vencedorDaRodada = 2;
            //CASO NÃO TENHA MATADO A CARTA DO PEDRO VAMOS VERFICICAR QUEM TEM MAIS VIDA
            }else{
                if(vidatulio > vidatulio){
                    vencedorDaRodada = 1;
                }else if(vidatulio < vidatulio){
                    vencedorDaRodada = 2;

                //CASO ELES POSSUISEM A MESMA VIDA VAMOS VER QUEM TEM O MAIOR ATAQUE
                }else{
                    if(ataquepedro > ataquetulio){
                        vencedorDaRodada = 1;

                    }else{
                        vencedorDaRodada = 2;
                    }
                }
            }
        }
    //SE O TULIO TIVER A MENOR VIDA E COMECANDO A RODADA
    }else{
        //VIDA O PEDRO LEVANDO DANO
        vidatulio -= ataquetulio;
        //VERIFICANDO SE A CARTA DO PEDRO MORREU
        if(vidatulio <= 0){
            vencedorDaRodada = 2;
        }
        //SE A CARTA DELE NÃO MORREU VAMOS PARA O ATAQUE DO PEDRRO
        else{
            vidatulio -= ataquepedro;
            //VERIFICANDO A VIDA DO TULIO
            if(vidatulio <= 0){
                vencedorDaRodada = 1;
            }
            //CASO O TULIO N MORRA COM O ATAUQE DO PEDRO - VEREMOS QUEM TEM MAIS VIDA
            else{
                if(vidatulio > vidatulio){
                    vencedorDaRodada = 1;
                }else if(vidatulio < vidatulio){
                    vencedorDaRodada = 2;

                //CASO ELES POSSUISEM A MESMA VIDA VAMOS VER QUEM TEM O MAIOR ATAQUE
                }else{
                    if(ataquepedro > ataquetulio){
                        vencedorDaRodada = 1;

                    }else{
                        vencedorDaRodada = 2;
    
                    }
                }
            }
        }
    }
    return vencedorDaRodada;
}

int main(){

    //INPUT
    int classePed1, classePed2, classePed3, classeTul1, classeTul2, classeTul3;
    //CLASSES - 1 (Guerreiro), 2 (Mago) ou 3 (Arqueiro).
    double vidaPed1, vidaPed2, vidaPed3, vidaTul1, vidaTul2, vidaTul3, ataquePed1, ataquePed2, ataquePed3, ataqueTul1, ataqueTul2, ataqueTul3; 

    scanf("%d%lf%lf %d%lf%lf %d%lf%lf %d%lf%lf %d%lf%lf %d%lf%lf", &classePed1,&ataquePed1,&vidaPed1, &classePed2,&ataquePed2,&vidaPed2, &classePed3,&ataquePed3,&vidaPed3, &classeTul1,&ataqueTul1,&vidaTul1, &classeTul2,&ataqueTul2,&vidaTul2, &classeTul3,&ataqueTul3,&vidaTul3);

    int rodada1 = rodadasBatalha(classePed1,classeTul1,vidaPed1,vidaTul1,ataquePed1,ataqueTul1);
    int rodada2 = rodadasBatalha(classePed2,classeTul2,vidaPed2,vidaTul2,ataquePed2,ataqueTul2);
    int rodada3 = rodadasBatalha(classePed3,classeTul3,vidaPed3,vidaTul3,ataquePed3,ataqueTul3);

    if(rodada1 == 1){
        printf("Rodada1: Pedro\n");
    }else{
        printf("Rodada1: Tulio\n");
    }

    if(rodada2 == 1){
        printf("Rodada2: Pedro\n");
    }else{
        printf("Rodada2: Tulio\n");
    }

    if(rodada3 == 1){
        printf("Rodada3: Pedro\n");
    }else{
        printf("Rodada3: Tulio\n");
    }

    return 0;
}