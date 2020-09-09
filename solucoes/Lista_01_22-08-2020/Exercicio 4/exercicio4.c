/*Leia um grau Celsius e calcule seu equivalente em FAHRENHEIT,
utilizando a fórmula F = (C * 1*8) + 32*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int temperarturaC, temperaturaF;

    int main(){
     inicio:

            setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 04 ----------\n\n");
          printf("\nDigite uma temperara em Clesius(somente número):\n");
          scanf("&i", &temperarturaC);

          temperaturaF = (temperarturaC * 1.8) + 32;
          printf("Em Fahrenheit, sua temperatura será de %i°F",temperaturaF);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();

     goto inicio;
    }

