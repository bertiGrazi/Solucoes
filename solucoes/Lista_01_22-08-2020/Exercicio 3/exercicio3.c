/*Fa�a um programa que pe�a dois n�meros,base e expoente, calcule e mostre o
primeiro elevado pelo segundo*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int base, expoente, resultado;

    int main(){
     inicio:

            setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 03 ----------\n\n");
          printf("\nDigite um n�mero:\n");
          scanf("%i", &base);
          printf("\nDigite um n�mero:\n");
          scanf("%i", &expoente);

          resultado = pow(base,expoente);
          printf("O primeiro n�mero elevado ao segundo � %d", resultado);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();

     goto inicio;
    }
