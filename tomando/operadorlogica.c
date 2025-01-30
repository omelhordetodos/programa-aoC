#include <stdio.h>

int main() {
    int idade, renda, dependente;

    printf ("Digite sua idade: \n");
    scanf ("%d", &idade);
    printf ("Digite sua renda: \n");
    scanf ("%d", &renda);
    printf ("Digite o numero de dependetes de você: \n");
    scanf ("%d", &dependente);

    if (idade >= 18 && idade <= 60){
        if (renda < 3000){
            if (dependente >= 2){
                printf ("Você está qualificado para o beneficio! \n");

            } else {
                printf ("Você foi desqualificado por conta do numero de dependentes minimo! \n");

            }

        } else {
            printf ("Você foi desqualificado para o beneficio por conta da renda! \n");

        }

    } else {
        printf ("Você foi desqualificado para o beneficio por conta da idade! \n");

    }

}