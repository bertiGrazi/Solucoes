/*Calcule o sálario líquido de um funcionário, sabendo que sobre o sálario bruto, incide-se
um desconto de 8.5% para a previdência e sobre o restante, tem-se um desconto de 27.5% para
o IR. Leia o salário bruto e mostre o salário líquido, o IR e a previdência*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salarioBruto, salarioLiquido, ir, previdencia;

int main(){
     inicio:

            setlocale(LC_ALL, "Portuguese");

          printf("--------EXERCICIO 05 ----------\n\n");
          printf("\nOlá, funcionario(a)! Digite seu salário bruto:\n");
          scanf("%f", &salarioBruto);

          previdencia = salarioBruto * 0.085;
          ir = (salarioBruto - previdencia) * 0.275;
          salarioLiquido = (salarioBruto - ir);

          printf("\nSeu salário Líquido é de R$%f\n", salarioLiquido);
          printf("Descontados:\n");
          printf("Previdência (8,5%): R$%f\n", previdencia);
          printf("IR (24,5%): R$%f\n", ir);
          printf("\n\nInsira uma tecla para iniciar novos valores\n");
          getch ();

        goto inicio;
}

