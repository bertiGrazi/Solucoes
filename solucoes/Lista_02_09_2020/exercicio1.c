/*– Dado o programa abaixo, modifique-o de modo que o loop for seja substituido pelo loop do...while.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
        int contador;
        float base, altura, area;
        system ("cls");

        contador = 0;
        base = 0;
        altura = 0;
        area = 0;

        do {
            printf("\n Base: ");
            fflush(stdin);
            scanf("%f", &base);

            printf("\n Altura: ");
            fflush(stdin);
            scanf("%f", &altura);

                if(base == 0 || altura == 0){
                    printf("\nImpossível calcular área do triângulo");
                               }
                  else {
                        area =base * altura/2;
                        printf("\n Área = %2.2f", area);
                    }
                    contador++;
                }
        while (contador < 3);

        printf("\n\n");
        system("pause");
}
