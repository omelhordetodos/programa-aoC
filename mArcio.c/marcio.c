#include <stdio.h>

int main () {
    int marc, il;
    int i = 0;
    int numero;
    while (i <= 10) {

        if (i % 2 == 0){
            printf ("Numero par: %d \n", i);

        }

        i++;
    }

    //do while

    do {
        printf ("Digite um numero par para sair. \n");
        scanf ("%d", &numero);

        if (numero % 2 == 0) {
            printf ("O numero é par. \n");

        } else {
            printf ("o numero é impar. \n");
        }

    } while (numero %2 != 0);

    printf ("Voce digitou um numero par. saindo do programa... \n");

    // for

    printf ("Digite um numero para saber a tabuada. \n");
    scanf ("%d", &marc);

    for (il = 0; il <= 10; il++){

        printf ("%d x %d = %d \n", il, marc, il * marc);
    }
    return 0;
}