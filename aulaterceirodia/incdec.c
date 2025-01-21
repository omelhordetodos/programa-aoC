#include <stdint.h>

int main () {

    int num1 = 1, result;

    printf ("pré incremento: %d\n", result);
    // num1 = num1 + 1;
    result = num1++;

    //printf ("pós incremento: %d\n", result);
    printf ("pré pós-incremento: %d e numero: %d\n", result, num1);

    result = ++num1;

    //printf ("pós incremento: %d\n", result);
    printf ("pós pré-incremento: %d e numero: %d\n", result, num1);
    //printf ("pré decremento: %d\n", result);
    // num1 = num1 - 2;
    result = num1--;

    printf ("pré pós-decremento: %d e numero: %d\n", result, num1);

    result = --num1;

    printf ("pré pré-decremento: %d e numero: %d\n", result, num1);
    //printf ("pós decremento: %d\n", result);
}