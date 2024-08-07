#include <stdio.h>
#include <math.h>

int main (){

//INPUT

// -  TARIFA == VALOR DA VIAGEM / O QUANTO ELE PODE GASTAR == 0.3*SALARIO  
//--PEGAR O SALARIO E ACHAR OS 30% - FAZER O VALOR DA VIAGEM - IF PRA VER SE ELE VAI VIAJAR DIA DE SEMANA OU NÃO - VER SE O DINHEIRO DA PRA VIAJAR

double salario, vftarifa, ppquilometro, quilometragem;
int diaViagem;
scanf("%lf%lf%lf%lf%d", &salario, &vftarifa, &ppquilometro, &quilometragem, &diaViagem);

//O QUANTO ELE PODE GASTAR
double gastoViagem = 0.3 * salario;
//TARIFAS
double tarifaSemana = vftarifa + ppquilometro * quilometragem;
double tarifaFds = tarifaSemana * 1.1;

//AS OPÇÕES DE DIAS DE SEMANA E FINAIS DE SEMANA

//FIM DE SEMANA
if (diaViagem == 1)
{
    //SE ELE TIVER DINHEIRO PARA VIAJAR
    if(gastoViagem >= tarifaFds){
        double saldoQueRestou = gastoViagem - tarifaFds;
        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifaFds);
        printf("%.2lf", saldoQueRestou);
    }
    //NÃO TEM DINHEIRO PRA VIAJAR
    else{
        double saldoQueFaltou = tarifaFds - gastoViagem;
        printf("Não vai poder viajar.\n");
        printf("%.2lf", saldoQueFaltou);
    }
}
//DIA DE SEMANA
else{
    //SE ELE TIVER DINHEIRO PARA VIAJAR
    if(gastoViagem >= tarifaSemana){
        double saldoQueRestou = gastoViagem - tarifaSemana;
        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifaSemana);
        printf("%.2lf", saldoQueRestou);
    }
    //NÃO TEM DINHEIRO PRA VIAJAR
    else{
        double saldoQueFaltou = tarifaSemana - gastoViagem;
        printf("Não vai poder viajar.\n");
        printf("%.2lf", saldoQueFaltou);
    }
}
    return 0;
}