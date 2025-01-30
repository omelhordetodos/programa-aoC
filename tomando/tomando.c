#include <stdio.h>

int main () {

    float temp, umidade;
    unsigned int estoque;

    printf ("Digite a temperatura: \n");
    scanf ("%f", &temp);
    printf ("Digite a umidade do local: \n");
    scanf ("%f", &umidade);
    printf ("Digite a quantidade no estoque: \n");
    scanf ("%d", &estoque);

    if (temp > 30){
        printf ("A temperatura está muito alta. \n");

    } else {

        printf ("A temperatura está boa. \n");

        if (umidade > 50) {
            printf ("A umidade está critica. \n");

        } else {

            printf ("A umidade está adequada. \n");

            if (estoque <= 1000) {
                printf ("O estoque está abaixo do esperado. \n");
                printf ("O local é seguro para operação. \n");
            } else {
                printf ("O estoque está pronto para ser vendido. \n");
                printf ("O local é seguro para operação. \n");

            }
        }
    }

    return 0;
}