#include <stdio.h>

int main () {
    int idade, resultado;

    printf ("Digite sua idade: \n");
    scanf ("%d", &idade);

    resultado = idade >= 18 ? 1 : 0;

    if (resultado = 1){
    printf ("Voce é maior de idade\n");

    } else {
    printf ("Voce é menor de idade\n");

    }

}