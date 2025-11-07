#include <stdio.h>
#include "Resolucoes.h"

int main (void)
{
    int numQuestao;
    int xGeral;

    printf ("Digite o numero da questao e em seguida sua entrada correspondente: ");
    scanf ("%d", &numQuestao);
    scanf ("%d", &xGeral);

    switch (numQuestao) 
    {
        case 1:
            if (ehTriangular(xGeral) == 1)
                printf ("1\n");

            else
                printf ("0\n");

            break;

        case 2:
            if (valorQuadrado(xGeral) == 1)
                printf ("1\n");

            else
                printf ("0\n");
            
            break;

        case 3:
            kPerfeitos(xGeral);
            break;

        case 4:
            dobroMetade(xGeral);
            break;
        
        case 5:
            if (ehCoincidencia(xGeral) == 1)
                printf ("SIM\n");
            
            else
                printf ("NAO\n");

            break;
        
        case 6:
            nFibonacci(xGeral);
            break;
        
        case 7:
            fatorial(xGeral);
            break;
            
    }

}