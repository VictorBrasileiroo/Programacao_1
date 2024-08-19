#include <stdio.h>
int encontrarinteiros(int N, int A, int B, int encontrado){
//PRIMEIRO ELE PEGA O VALOR QUE QUER ANALISAR - O INÍCIO DO INTERVALO E O FIM
    //caso base: se o valor ultrapassar o limite máximo ele para a recursão
    //LOGO APOS ELE VERFICIA SE O INICIO É MAIOR QUE O FIM (CASO BASE - OU SEJA A RECURSÃO SÓ PARA QUANDO A FOR MAIOR QUE B)
    if(A>B){
        //aqui ele printa inexistente caso não tenha nenhum multiplo
        if(encontrado == 0){
        //CASO NÃO EXISTA ELE PRINTA INEXISTENTE - SE EXISTIR ELE PULA
            printf("INEXISTENTE");
        }
        //SE FOR TRUE E TIVER MULTIPLOS ELE TERMINA A FUNÇÃO E NÃO OLHA MAIS NENHUMA CONDIÇÃO - (FIM DA RECURSÃO);
        return 0;    
    }
    //CASO O IF FOR FALSE ELE PULA A CONDIÇÃO
    ///PRÓXIMO CONDICIONAL ANALISA OS MULTIPLOS 
    if(A%N == 0){
        //CASO SEJA MULTIPLO ELE PRINTA NA TELA E CONTA 1 PARA A VARIAVEL ENCONTRADO
        printf("%d\n", A);
        encontrado = 1;
    //SENÃO ELE PULA ESSA CONDIÇÃO
    }
    //E POR FIM A FUNÇÃO CHAMA ELA MESMA MAS COM O POSTERIOR DE "A"
    encontrarinteiros(N,A+1,B,encontrado);
 
// SACADA DA QUESTÃO - A FUNÇÃO SEMPRE VAI CHAMAR ELA MESMA - MENOS NO CASO QUE "A" FOR MAIOR QUE "B" - NESSE CASO ELA FINALIZA COM O RETURN 0;
}
int main(){
    int n,a,b;
    scanf("%d%d%d", &n,&a,&b);
    encontrarinteiros(n,a,b, 0);
    return 0;
}