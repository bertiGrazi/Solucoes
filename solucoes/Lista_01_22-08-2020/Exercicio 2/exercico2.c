/* Leia um número e retorne o dobre e seu quadrado*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, numDobro, numQuadrado;

    int main(){

        inicio:

            setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 02 ----------\n\n");
          printf("Digite um número:\n\n");
          scanf("%d", &num);

          numDobro = num * 2; // cálculo de dobro de um número
          numQuadrado = num * num;

          printf("\nO dobro do número digitado é %d e seu quadrado é %d\n\n", numDobro, numQuadrado);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();
        goto inicio;
    }
