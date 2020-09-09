#include <stdio.h>

/*Definição das variávies*/
char sexo;
float altura, pesoIdeal;

int main(){


    printf("------EXERCICIO 02--------\n\n");
    printf("Digite sua altura conforme o exemplo:\nEx:1.61\n");
    fflush(stdin);
    scanf("%f", &altura);

    printf("Digite M para Masculino e F para feminino:\n");
    fflush(stdin);
    scanf("%c", &sexo);

        if(sexo == 'M'){
            pesoIdeal = ((72.7 * altura) - 58.0);
            printf("\nPeso ideal: %f\n", pesoIdeal);
        } else{
            pesoIdeal = ((62.1 * altura) - 44.7);
            printf("\nPeso ideal: %f\n", pesoIdeal);
          }

    system("pause");
    return 0;
}
