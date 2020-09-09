/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a) a idade dessa pessoa;
    b) a idade dessa pessoa em meses;
    c) a idade dessa pessoa em dias;
    d) a idade dessa pessoa em semanas; */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int anoAtual, anoNascimento;
int idade, idadeMeses, idadeDias, idadeSemanas;

int main(){
     inicio:

            setlocale(LC_ALL, "Portuguese");
        printf("--------EXERCICIO 07 ----------\n\n");
        printf("Digite o ano atual: ");
        scanf("%d", &anoAtual);
        printf("Digite seu ano de nascimento: ");
        scanf("%d", &anoNascimento);


        idade = anoAtual - anoNascimento;/*idade da pessoa*/
        idadeMeses = idade * 12; /*idade da pessoa em meses*/
        idadeDias = idade * 365; /*idade da pessoa em dias*/
        idadeSemanas = idade * 48; /*idade da pessoa em semanas*/

        printf("\n\nIdade: %d anos\n", idade);
        printf("Idade em Meses: %d meses\n", idadeMeses);
        printf("Idade em Dias: %d dias\n", idadeDias);
        printf("Idade em Semanas: %d semanas\n", idadeSemanas);
        printf("\n\nInsira uma tecla para iniciar novos valores\n\n");
        getch ();

    goto inicio;
}
