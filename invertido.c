#include <stdio.h>

int main(int argc, char ** argv) {
    int numero, manter, inverter = 0;
    printf("Insira um número inteiro: ");
    scanf("%d",&numero);
    for ( ; numero > 0; ){
        manter = numero%10;
        inverter = (inverter * 10) + manter;
        numero = numero/10;
    }
    printf("O número é %d" , inverter);
    return 0;
}
