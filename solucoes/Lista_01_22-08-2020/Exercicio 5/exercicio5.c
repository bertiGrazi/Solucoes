/*Calcule o s�lario l�quido de um funcion�rio, sabendo que sobre o s�lario bruto, incide-se
um desconto de 8.5% para a previd�ncia e sobre o restante, tem-se um desconto de 27.5% para
o IR. Leia o sal�rio bruto e mostre o sal�rio l�quido, o IR e a previd�ncia*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salarioBruto, salarioLiquido, ir, previdencia;

int main(){
     inicio:

            setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 05 ----------\n\n");
          printf("\nOl�, funcionario(a)! Digite seu sal�rio bruto:\n");
          scanf("%f", &salarioBruto);

          previdencia = salarioBruto * 0.085;
          ir = (salarioBruto - previdencia) * 0.275;
          salarioLiquido = (salarioBruto - ir);

          printf("\nSeu sal�rio L�quido � de R$%f\n", salarioLiquido);
          printf("Descontados:\n");
          printf("Previd�ncia (8,5%): R$%f\n", previdencia);
          printf("IR (24,5%): R$%f\n", ir);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();

        goto inicio;
}

