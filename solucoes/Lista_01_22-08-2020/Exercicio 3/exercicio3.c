/*Faça um programa que peça dois números,base e expoente, calcule e mostre o
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
          printf("\nDigite um número:\n");
          scanf("%i", &base);
          printf("\nDigite um número:\n");
          scanf("%i", &expoente);

          resultado = pow(base,expoente);
          printf("O primeiro número elevado ao segundo é %d", resultado);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();

     goto inicio;
    }
