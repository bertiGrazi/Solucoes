/*Elaborar um algoritmo para calcular e apresentar o volume de uma lata de óleo,
utilizando a fórmula V = 3.14159 * (R*R)* ALTURA*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int raioLata, alturaLata;
  float volumeLata;

    int main(){
        inicio:
        setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 01 ----------\n\n");
        printf("Digite o raio da lata:\n");
        scanf("%i",&raioLata);
        printf("Digite a altura da lata:\n");
        scanf("%i", &alturaLata);

        volumeLata = 3.14159 * (raioLata * raioLata) * alturaLata;
        printf("O volume da lata de óleo é de: %3f centímetros cúbicos", volumeLata);
        printf("\n\nInsira uma tecla para iniciar novos valores\n");
        getch ();
        goto inicio;

    }
