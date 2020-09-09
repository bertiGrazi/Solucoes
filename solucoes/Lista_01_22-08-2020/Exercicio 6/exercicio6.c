/*Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo
salário, sabendo-se que este sofreu um reajuste de 25%*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salario, reajuste, novoSalario;

int main(){
     inicio:

            setlocale(LC_ALL, "Portuguese");
        printf("--------EXERCICIO 06 ----------\n\n");
        printf("Olá funcionario(a), digite seu salário bruto:\n");
        scanf("%f", &salario);

        reajuste = salario * 0.25;
        novoSalario = salario + reajuste;
        printf("Com o reajuste, o novo salário será de: R$%.2f", novoSalario);
        printf("\n\nInsira uma tecla para iniciar novos valores\n\n");
        getch ();

        goto inicio;
}
