#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    srand(time(0));

    int numerobot, numerojog, resultado;
    char comparacao;
    // gerar numero aleatorio
    numerobot = rand() % 100 + 1; //numero aleatorio entre 1 e 100

    //inicio do jogo
    printf ("#### Jogo aleatorio #### \n");
    printf ("Escolha uma das opições abaixo e veja se ganhou. \n");
    printf ("M. Maior. \n");
    printf ("N. menor. \n");
    printf ("I. igual. \n");

    printf ("escolha a comparação. \n");
    scanf ("%c", &comparacao);

    printf ("Ecolha um numero entre 1 e 100. \n");
    scanf ("%d", &numerojog);

    switch (comparacao)
    {
    case 'M':
    case 'm':
        printf ("voce escolheu a opição maior. \n");
        resultado = numerojog > numerobot ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf ("voce escolheu a opição menor. \n");
        resultado = numerojog < numerobot ? 1 : 0;
        break;
        printf ("voce escolheu a opição igual. \n");
    case 'I':
    case 'i':
        resultado = numerojog == numerobot ? 1 : 0;
        break;    
    default:
        printf ("opição de jogo invalida.");
        break;
    }

    printf ("o numero do jogador é %d e o numero do bot é %d. \n", numerojog, numerobot);

    if (resultado == 1) {
        printf ("Parabens, Voce venceu! \n");
        
    } else {
        printf ("Parabens, Voce perdeu! \n");

    }
}