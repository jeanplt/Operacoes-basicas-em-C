#include <stdio.h>
#include <math.h>
#include "Resolucoes.h"

int ehTriangular (int dado)
{
    int a = 1;
    int b = 2;
    int c = 3;

    while (c <= (dado/2))
    {
        if ((a*b*c) == dado)
            return 1;

        a += 1;
        b += 1;
        c += 1;
    }

    return 0;
}

int valorQuadrado (int inicial)
{
    int atual = inicial; 
    int prox;

    if (atual == 0)
        return 0;

    while (atual != 0)
    {
        scanf ("%d", &prox);
        if (atual != sqrt(prox))
            return 0;
        
        scanf ("%d", &atual);
    }

    return 1;
}

void kPerfeitos (int quantidade)
{
    int num = 6;

    while (quantidade > 0)
    {
        int soma = 0;
        int d = 1;

        while (d <= (num/2))
        {
            if ((num % d) == 0)
                soma += d;

            d += 1; 
        }

        if (soma == num)
        {
            printf("%d ", num);
            quantidade -= 1;
        }

        num += 1;
    }

    printf ("\n");
}

void dobroMetade(int X) 
{
    int soma = X;
    int cont = 1;
    int ult;
    int num;

    scanf("%d", &num);  
    ult = num;
    cont += 1;
    soma += num;
    while (num != (ult * 2) && (num * 2) != ult) 
    {  
        ult = num;
        scanf("%d", &num);  
        cont += 1;
        soma += num;
    }

    printf("%d %d %d %d\n", cont, soma, ult, num);
}

int ehCoincidencia (int valor)
{
    int num = valor * 37;
    int soma = 0;

    while (num != 0)
    {
        soma += num % 10;
        num = num/10;
    }

    if (soma == valor)
        return 1;

    return 0;
}

void nFibonacci (int vezes)
{
    int ini = 0;
    int prox = 0;
    int soma = 1;
    int cont;

    for (cont = 1; cont <= vezes; cont++)
    {
        printf ("%d ", soma);
        ini = prox;
        prox = soma;
        soma = ini + prox;
    }
    
    printf ("\n");
}

void fatorial (int multiplicacoes)
{
    int f;
    int mul = 1;

    for (f = 1; f <= multiplicacoes; f++)
        mul *= f;
    
    printf ("%d\n", mul);
}