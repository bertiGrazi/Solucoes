/* Leia um n�mero e retorne o dobre e seu quadrado*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, numDobro, numQuadrado;

    int main(){

        inicio:

            setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 02 ----------\n\n");
          printf("Digite um n�mero:\n\n");
          scanf("%d", &num);

          numDobro = num * 2; // c�lculo de dobro de um n�mero
          numQuadrado = num * num;

          printf("\nO dobro do n�mero digitado � %d e seu quadrado � %d\n\n", numDobro, numQuadrado);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();
        goto inicio;
    }
