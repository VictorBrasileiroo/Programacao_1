#include <stdio.h>

void programador(int dia, int linhas, int codigos, int metalinhas, int metacodigos, int diaMaisProducao, int maxlinhas){
    if(dia > 7){
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", metacodigos);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", metalinhas);
        switch (diaMaisProducao)
        {
            case 1: printf("DIA QUE MAIS PRODUZIU: DOMINGO\n"); break;
            case 2: printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n"); break;
            case 3: printf("DIA QUE MAIS PRODUZIU: TERÇA\n"); break;
            case 4: printf("DIA QUE MAIS PRODUZIU: QUARTA\n"); break;
            case 5: printf("DIA QUE MAIS PRODUZIU: QUINTA\n"); break;
            case 6: printf("DIA QUE MAIS PRODUZIU: SEXTA\n"); break;
            case 7: printf("DIA QUE MAIS PRODUZIU: SABADO\n"); break;
        default:
            break;
        }
        return;
    }

    //scan das duplas por dia
    scanf("%d%d", &codigos, &linhas);

    //condicional do problema
    if(codigos >= 5){
        metacodigos += 1;
    }

    if(linhas >= 100){
        metalinhas += 1;
    }

    //condicional pra analisar o dia - ele vai até o final e atribuir o dia que teve mais linhas a variavel
    if(linhas > maxlinhas){
        diaMaisProducao = dia;
        maxlinhas = linhas;
    }


    //Aqui ele vai ler cada variável de linhas e código de acordo com o dia - quando vira o dia ele puxa mais duas variáveis
    programador(dia+1,linhas,codigos, metalinhas, metacodigos, diaMaisProducao, maxlinhas);
}

int main(){
    programador(1,0,0,0,0,0,0);
    return 0;
}