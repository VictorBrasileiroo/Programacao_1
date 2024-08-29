#include <stdio.h>
#include <stdbool.h> 

bool verificadorPrimo(int a, int b) {
    if (a <= 1) return false;
    if (b * b > a) return true;
    if (a % b == 0) return false;
    return verificadorPrimo(a, b + 1);
}

int verificadorPotDois(int base, int pot) {
    if (pot == 0) return 1;
    return base * verificadorPotDois(base, pot - 1);
}

int resultadoPotDois(int x, int cont) {
    int potAtual = verificadorPotDois(2, cont);
    if (potAtual == x) return 1;
    if (potAtual > x) return 0;
    return resultadoPotDois(x, cont + 1);
}

int BatalhasDosDoentes(int ao, int vo, int ak, int vk, int contadorBatalhas) {
    int OrdepKriptonita = !resultadoPotDois(contadorBatalhas,0);
    int KjacKriptonita = !verificadorPrimo(contadorBatalhas, 2); 

    if (vo <= 0 || vk <= 0) {
        return (vk <= 0) ? 1 : 2; 
    }
    
    if (OrdepKriptonita && (vo > ao)) {
            int aux = ao;
            ao = vo;
            vo = aux;
    }

    if(OrdepKriptonita){
        vk -= ao;
    }

    if(KjacKriptonita && (vk % 2 != 0)){
        ak += 5;
    }

    if(KjacKriptonita){
        vo -= ak;
    }

    return BatalhasDosDoentes(ao, vo, ak, vk, contadorBatalhas + 1);
}

void scan(int b, int contadorO, int contadorJ) {
    int atkOrdep, vidOrdep, atkKcaj, vidKcaj;
    scanf("%d%d%d%d", &atkOrdep, &vidOrdep, &atkKcaj, &vidKcaj);

    if (b == 0) {
        if (contadorO > contadorJ) {
            printf("ordep ganhou %d coffees\n", contadorO);
        } else if (contadorO < contadorJ) {
            printf("kcaj ganhou %d coffees\n", contadorJ);
        } else {
            printf("F coffees\n");
        }
        return;
    }

    int resultado = BatalhasDosDoentes(atkOrdep, vidOrdep, atkKcaj, vidKcaj, 1);

    if (resultado == 1) {
        contadorO++;
    } else {
        contadorJ++;
    }

    scan(b - 1, contadorO, contadorJ);
}

int main() {
    int qntRodadas;
    scanf("%d", &qntRodadas);
    scan(qntRodadas, 0, 0);
    return 0;
}
