#include <stdio.h>

int main () {

    int num1, num2;
    int adic, subt, mult, divi;

    printf ("Digite o primeiro numero\n");
    scanf ("%d", &num1);
    printf ("Digite o segundo numero\n");
    scanf ("%d", &num2);

    // operação soma
    adic = num1 + num2;

    // operação subtração
    subt = num1 - num2;

    // operação multiplicação
    mult = num1 * num2;

    // operação divisão
    divi = num1 / num2;

    printf("A soma é: %d\n", adic);
    printf("A subtração é: %d\n", subt);
    printf("A multiplicação é: %d\n", mult);
    printf("A divisão é: %d\n", divi);  
      
}