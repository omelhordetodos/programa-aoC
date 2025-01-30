#include <stdio.h>

int main () {
    
    int opicao;
    float nota1, nota2, nota3, nota4, media;

    printf ("#### Programa de ajuda ao professor #### \n");
    printf ("Escolha uma das opições para proceguir. \n");
    printf ("1. calcular media. \n");
    printf ("2. ver situação. \n");
    printf ("3. sair. \n");
    printf ("###############\n");
    scanf ("%d", &opicao);

    switch (opicao)
    {
    case 1:
        printf ("Digite a primeira nota: \n");
        scanf ("%f", &nota1);
        printf ("Digite a segunda nota: \n");
        scanf ("%f", &nota2);
        printf ("Digite a terceira nota: \n");
        scanf ("%f", &nota3);
        printf ("Digite a quarta nota: \n");
        scanf ("%f", &nota4);        

        media = (nota1 + nota2 + nota3 + nota4) / 4;
        printf ("A media do aluno é: %.2f \n", media);
        break;
    case 2:
        printf ("Digite a media do aluno. \n");
        scanf ("%f", &media);

        if (media >= 7) {
            printf ("O aluno passou com %.2f de media. \n", media);
        } else if (media >= 5) {
            printf ("O aluno ficou de recuperação com %.2f de media. \n", media);
        } else {
            printf ("O aluno reprovou com %.2f de media. \n", media);
        }

        break;
    case 3:
        printf ("saindo...\n");
        break;
    default:
        printf ("opição invalida!");
        break;
    }


}