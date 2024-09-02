#include <stdio.h>

// int vida,int dano - fim quando vida == 0
// duas habilidades - atkBasico = danoAtual ou atkEspecial = danoAtual + 50
// Bernado usa apenas o atkBasico - tenta matar seu colega apenas usando isso
// Claudio vai ficar acumulando dano até conseguir matar de uma vez só seu colega
// Claudio ataca primeiro

// scan de batalhas
// scanf das vidas e danos
// contador para ver quem vai vencer - jogar na scan

// “Clodes” ou “Bezaliel”

int batalhaDosDoentes(int vc, int vb, int dc, int db)
{
    int maxRound = vc / db;

    if (vc <= 0 || vb <= 0)
    {
        return vc <= 0 ? 1 : 2;
    }

    if (ceil((double)vc / db) < ceil((double)vb / dc))
    {
        dc += 50;
    }
    else
    {
        vb -= dc;
    }

    if (vb > 0)
    {
        vc -= db;
    }
    batalhaDosDoentes(vc, vb, dc, db);
}
void scan(int a)
{
    if (a == 0)
    {
        return;
    }
    int vidaC, danoC, vidaB, danoB;
    scanf("%d%d%d%d", &vidaC, &vidaB, &danoC, &danoB);
    int resultado = batalhaDosDoentes(vidaC, vidaB, danoC, danoB);
    if (resultado == 1)
    {
        printf("Bezaliel\n");
    }
    else if (resultado == 2)
    {
        printf("Clodes\n");
    }
    scan(a - 1);
}
int main()
{
    int qntBatalhas;
    scanf("%d", &qntBatalhas);
    scan(qntBatalhas);
    return 0;
}