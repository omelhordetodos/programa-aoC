#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf ("*** Caldulador de Media ***\n");

    printf ("Digite a 1° nota:\n");
    scanf ("%f", &nota1);

    printf ("Digite a 2° nota:\n");
    scanf ("%f", &nota2);

    printf ("Digite a 3° nota:\n");
    scanf ("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf ("A media é: %.2f\n", media);
}