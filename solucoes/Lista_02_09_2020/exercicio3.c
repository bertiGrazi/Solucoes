/*Elabore um programa em Linguagem C utilizando o loop do while que solicite ao usu�rio para que digite um n�mero inteiro e apresente na tela a tabuada
de 1 a 10 para este n�mero.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, contador;
    contador = 0;
    printf("Digite um n�mero:\n");
    scanf("%d", &numero);
    printf("\nTABUADA DO %d \n\n", numero);
       do {
            contador++;
            printf("%d x %d = %d\n", numero, contador, numero * contador);
       } while (contador < 10);

    printf("\n\n\n");
    system("PAUSE");
}
