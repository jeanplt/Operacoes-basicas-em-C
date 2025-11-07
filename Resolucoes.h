/* 
    Funcoes para responder as 7 questoes de aquecimento
    Autor:
            Jean
    
    Obs: Fiz o programa de forma modular para nao perder o costume.
*/

/* Funcao para calcular se um numero natural lido eh triangular, com base em seu valor e 
o produto de tres numeros naturais consecutivos. */
int ehTriangular (int dado);

/* Funcao que verifica se uma seria lida terminada em zero eh do tipo Valor-Quadrado, imprimindo
1 caso seja e 0 caso contrario. */
int valorQuadrado (int inicial);

/* Funcao que a partir de um inteiro positivo K lido, mostra os K numeros que sao perfeitos, por 
definicao.  */
void kPerfeitos (int quantidade);

/* Funcao que dada uma sequencia de valores, conta quantos elementos da sequencia, a soma deles e
os ultimos valores que fizeram encerrar a sequencia por serem o dobro/metade um do outro. */
void dobroMetade (int X);

/* Funcao que dado um numero inteiro positivo, multiplica seu valor por 37 e verifica se a soma
dos algarismos desse resultado sera igual ao valor do numero anteriormente lido, retornando 1
caso seja igual e 0 caso contrario. */
int ehCoincidencia (int valor);

/* Funcao que recebe um inteiro N maior ou igual a 1 e a partir disso imprime os N primeiros termos
da sequencia de Fibonacci. */
void nFibonacci (int vezes);

/* Funcao que recebe um inteiro N maior ou igual a 1 e a partir disso imprime o resultado de N!.  */
void fatorial (int multiplacoes);

