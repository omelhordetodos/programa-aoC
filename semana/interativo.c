#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int escolhajogador, escolhabot;
    srand(time(0));

    printf ("### PEDRA PAPEL TESOLSA ###\n");
    printf ("Escolha uma das opições. \n");
    printf ("1. pedra \n");
    printf ("2. papel \n");
    printf ("3. tesolra \n");
    printf ("Escolha entre uma das opições a cima\n");
    scanf ("%d", &escolhajogador);

    escolhabot = rand() % 3 + 1;

    switch (escolhajogador)
    {
    case 1:
        printf ("jogador escolheu: pedra \n");
        break;
    case 2:
        printf ("jogador escolheu: papel \n");
        break;
    case 3:
        printf ("jogador escolheu: tesolra \n");
        break;    
    default:
        printf ("opição invalida!\n");
        break;
    }

    switch (escolhabot)
    {
    case 1:
        printf ("bot escolheu: pedra \n");
        break;
    case 2:
        printf ("bot escolheu: papel \n");
        break;
    case 3:
        printf ("bot escolheu: tesolra \n");
        break;    
    }

    if (escolhajogador == escolhabot){
        printf ("### Empate ###\n");

    } else if ((escolhajogador == 1) && (escolhabot == 3) || 
    (escolhajogador == 2) && (escolhabot == 1) ||
    (escolhajogador == 3) && (escolhabot == 2)) {
        printf ("### Parabens voce ganhou ###\n");

    } else if ((escolhabot == 1) && (escolhajogador == 3) || 
    (escolhabot == 2) && (escolhajogador == 1) ||
    (escolhabot == 3) && (escolhajogador == 2)) {
        printf ("### Que pena voce perdeu ###\n");

    }
    return 0;
}