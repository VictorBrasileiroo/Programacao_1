#include <stdio.h>

int batalha(int classePed, int classeTul, double *vidaPed, double *vidaTul, double *ataquePed, double *ataqueTul, int *contadorPedro, int *contadorTulio) {
    int vencedorRodada;

    if(classePed == 1 && classeTul == 3) {
        *vidaPed *= 1.3;
    } else if(classePed == 3 && classeTul == 1) {
        *vidaTul *= 1.3;
    } else if(classePed == 3 && classeTul == 2) {
        *ataquePed *= 1.25;
    } else if(classePed == 2 && classeTul == 3) {
        *ataqueTul *= 1.25;
    } else if(classePed == 2 && classeTul == 1) {
        *ataquePed *= 1.15;
        *vidaPed *= 1.15;
    } else if(classePed == 1 && classeTul == 2) {
        *ataqueTul *= 1.15;
        *vidaTul *= 1.15;
    }

    if(*vidaPed < *vidaTul || *vidaPed == *vidaTul) {
        *vidaTul -= *ataquePed;
        if(*vidaTul <= 0) {
            vencedorRodada = 1;
            (*contadorPedro)++;
        } else {
            *vidaPed -= *ataqueTul;
            if(*vidaPed <= 0) {
                vencedorRodada = 2;
                (*contadorTulio)++;
            } else {
                if(*vidaPed > *vidaTul) {
                    vencedorRodada = 1;
                    (*contadorPedro)++;
                } else if(*vidaPed < *vidaTul) {
                    vencedorRodada = 2;
                    (*contadorTulio)++;
                } else {
                    if(*ataquePed > *ataqueTul) {
                        vencedorRodada = 1;
                        (*contadorPedro)++;
                    } else {
                        vencedorRodada = 2;
                        (*contadorTulio)++;
                    }
                }
            }
        }
    } else {
        *vidaPed -= *ataqueTul;
        if(*vidaPed <= 0) {
            vencedorRodada = 2;
            (*contadorTulio)++;
        } else {
            *vidaTul -= *ataquePed;
            if(*vidaTul <= 0) {
                vencedorRodada = 1;
                (*contadorPedro)++;
            } else {
                if(*vidaPed > *vidaTul) {
                    vencedorRodada = 1;
                    (*contadorPedro)++;
                } else if(*vidaPed < *vidaTul) {
                    vencedorRodada = 2;
                    (*contadorTulio)++;
                } else {
                    if(*ataquePed > *ataqueTul) {
                        vencedorRodada = 1;
                        (*contadorPedro)++;
                    } else {
                        vencedorRodada = 2;
                        (*contadorTulio)++;
                    }
                }
            }
        }
    }
    return vencedorRodada;
}
int main() {
    int classePed1, classePed2, classePed3, classeTul1, classeTul2, classeTul3;
    double vidaPed1, vidaPed2, vidaPed3, vidaTul1, vidaTul2, vidaTul3;
    double ataquePed1, ataquePed2, ataquePed3, ataqueTul1, ataqueTul2, ataqueTul3;
    scanf("%d%lf%lf %d%lf%lf %d%lf%lf %d%lf%lf %d%lf%lf %d%lf%lf",
          &classePed1, &ataquePed1, &vidaPed1, &classePed2, &ataquePed2, &vidaPed2,
          &classePed3, &ataquePed3, &vidaPed3, &classeTul1, &ataqueTul1, &vidaTul1,
          &classeTul2, &ataqueTul2, &vidaTul2, &classeTul3, &ataqueTul3, &vidaTul3);

        int contadorPedro = 0;
        int contadorTulio = 0;
        int resultadoRodada1 = batalha(classePed1, classeTul1, &vidaPed1, &vidaTul1, &ataquePed1, &ataqueTul1, &contadorPedro, &contadorTulio);
        int resultadoRodada2 = batalha(classePed2, classeTul2, &vidaPed2, &vidaTul2, &ataquePed2, &ataqueTul2, &contadorPedro, &contadorTulio);
        int resultadoRodada3 = batalha(classePed3, classeTul3, &vidaPed3, &vidaTul3, &ataquePed3, &ataqueTul3, &contadorPedro, &contadorTulio);

            printf("Rodada1: %s\n", resultadoRodada1 == 1 ? "Pedro" : "Tulio");
            printf("Rodada2: %s\n", resultadoRodada2 == 1 ? "Pedro" : "Tulio");
            printf("Rodada3: %s\n", resultadoRodada3 == 1 ? "Pedro" : "Tulio");
            printf("%s vitorioso", contadorPedro > contadorTulio ? "Pedro" : "Tulio");

    return 0;
}

