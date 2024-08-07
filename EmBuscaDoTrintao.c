#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    //CÁLCULO E INPUT
    int pontArt, pontPed, pontTul, pontWil;
    double numArt, numPed, numTul, numWil;
    char nomeMonitor;    
    scanf("%d%d%d%d %lf%lf%lf%lf %c", &pontArt,&pontPed,&pontTul,&pontWil, &numArt,&numPed,&numTul,&numWil, &nomeMonitor);

    //MÉDIA E REGULARIDADE 
    double mediaMonitores = (numArt + numPed + numTul + numWil)/ 4;
    double regularidade = sqrt(pow((numArt - mediaMonitores), 2) + pow((numPed - mediaMonitores), 2) + pow((numTul - mediaMonitores), 2) + pow((numWil - mediaMonitores), 2));
    
    //A DIFERENÇA ENTRE OS NUMEROS E MEDIAS
    double diferencaArt = fabs(mediaMonitores - numArt);
    double diferencaPed = fabs(mediaMonitores - numPed);
    double diferencaTul = fabs(mediaMonitores - numTul);
    double diferencaWil = fabs(mediaMonitores - numWil);
    // printf("%lf %lf %lf %lf", diferencaArt, diferencaPed, diferencaTul, diferencaWil);
    //SE POSSUIREM A MESMA DIFERENACA - Não foi possível determinar um vencedor :/ - Próxima rodada.
    //==============FIM DOS CÁLCULOS

    double pontuacaorodadaA, pontuacaorodadaP, pontuacaorodadaT, pontuacaorodadaW;

     //VALIDAÇÃO DA RODADA
    if((numArt < 0 || numArt > 100) || (numPed < 0 || numPed > 100) || (numTul < 0 || numTul > 100) || (numWil < 0 || numWil > 100)){
        printf("Números inválidos!\n");
        printf("Próxima rodada.");
    //INICIO VERDADEIRO DA JOGADA ============================================
    }else{
        //ARTHUR============================  
        if(diferencaArt<diferencaPed && diferencaArt<diferencaTul && diferencaArt<diferencaWil){
            if (nomeMonitor == 'a')
            {
                printf("Arthur venceu outra vez!\n");
                if(pontArt >= 0 && pontArt <= 20){
                    pontuacaorodadaA = 10 + (0.2*pontArt);
                }else if(pontArt > 20 && pontArt <= 40){
                    pontuacaorodadaA = 10 + (0.4*pontArt);
                }else if(pontArt > 40 && pontArt <= 60){
                    pontuacaorodadaA = 10 + (0.6*pontArt);
                }else if(pontArt > 60 && pontArt <= 80){
                    pontuacaorodadaA = 10 + (0.8*pontArt);
                }else{
                     pontuacaorodadaA = 10 + (1*pontArt);
                }
                printf("Pontuação: +%.2lf\n", pontuacaorodadaA);
            }else{
                printf("Arthur venceu!\n");
                printf("Pontuação: +10\n"); 
            }
        //PEDRO============================  
        }else if(diferencaPed<diferencaArt && diferencaPed<diferencaTul && diferencaPed<diferencaWil){
            if (nomeMonitor == 'p')
            {
                printf("Pedro venceu outra vez!\n");
                if(pontPed >= 0 && pontPed <= 20){
                    pontuacaorodadaP = 10 + (0.2*pontPed);
                }else if(pontPed > 20 && pontPed <= 40){
                    pontuacaorodadaP = 10 + (0.4*pontPed);
                }else if(pontPed> 40 && pontPed <= 60){
                    pontuacaorodadaP = 10 + (0.6*pontPed);
                }else if(pontPed> 60 && pontPed <= 80){
                    pontuacaorodadaP = 10 + (0.8*pontPed);
                }else{
                     pontuacaorodadaP = 10 + (1*pontPed);
                }
                printf("Pontuação: +%.2lf\n", pontuacaorodadaP);
            }else{
                printf("Pedro venceu!\n");
                printf("Pontuação: +10\n"); 
            }
        ////TULIO============================ 
        }else if(diferencaTul<diferencaArt && diferencaTul<diferencaPed && diferencaTul<diferencaWil){
            if (nomeMonitor == 't')
            {
                printf("Túlio venceu outra vez!\n");
                if(pontTul >= 0 && pontTul <= 20){
                    pontuacaorodadaT = 10 + (0.2*pontTul);
                }else if(pontTul > 20 && pontTul <= 40){
                    pontuacaorodadaT = 10 + (0.4*pontTul);
                }else if(pontTul > 40 && pontTul <= 60){
                    pontuacaorodadaT = 10 + (0.6*pontTul);
                }else if(pontTul > 60 && pontTul <= 80){
                    pontuacaorodadaT = 10 + (0.8*pontTul);
                }else{
                     pontuacaorodadaT = 10 + (1*pontTul);
                }
                printf("Pontuação: +%.2lf\n", pontuacaorodadaT);
            }else{
                printf("Túlio venceu!\n");
                printf("Pontuação: +10\n");
            }
        //WILL============================ 
        }else if(diferencaWil<diferencaArt && diferencaWil<diferencaTul && diferencaWil<diferencaPed){
             if (nomeMonitor == 'w')
            {
                printf("Will venceu outra vez!\n");
                if(pontWil>= 0 && pontWil <= 20){
                    pontuacaorodadaW = 10 + (0.2*pontWil);
                }else if(pontWil > 20 && pontWil <= 40){
                    pontuacaorodadaW = 10 + (0.4*pontWil);
                }else if(pontWil > 40 && pontWil <= 60){
                    pontuacaorodadaW = 10 + (0.6*pontWil);
                }else if(pontWil > 60 && pontWil <= 80){
                    pontuacaorodadaW = 10 + (0.8*pontWil);
                }else{
                     pontuacaorodadaW = 10 + (1*pontWil);
                }
                printf("Pontuação: +%.2lf\n", pontuacaorodadaW);
            }else{
                printf("Will venceu!\n");
                printf("Pontuação: +10\n"); //===================================resolver isso dq
            }

        //VERIFICAÇÃO SE A DIFERENCA MENOR FOR IGUAL
        }else{
            printf("Não foi possível determinar um vencedor :/\n");
            printf("Próxima rodada.");
            return 0;
        }
    }

    if (regularidade<=10)
    {
        printf("Houve regularidade na rodada!\n");
        printf("Todos ganharam +10 pontos");
    }

    return 0;
}
