#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char s1, s2, s3, s4, opcao;

int main(){
    setlocale(LC_ALL, "portuguese");

    inicio:

    printf("Digite sua senha:\n");
    s1 = getch();
    printf("*");
    s2 = getch();
    printf("*");
    s3 = getch();
    printf("*");
    s4 = getch();
    printf("*");

    if(s1 == '1' && s2 == '3' && s3 == '1' && s4 == '0'){
        printf("\n=======================\n   ");
        printf("     a = saldo      \n");
        printf("    b = dep�sito    \n");
        printf("    c = pagamentos   \n");
        printf("   d = transfer�ncias\n");
        printf("        e = sair     \n");
        printf("\n=======================\n   ");

        fflush(stdin);
        opcao = getch();
        switch(opcao){
            case 'a': printf("Opera��o : saldo");
            break;
            case 'b': printf("Opera��o : dep�sito");
            break;
            case 'c': printf("Opera��o : pagamentos");
            break;
            case 'd': printf("Opera��o : transfer�ncias");
            break;
            case 'e': printf("Encerrando opera��es� e encerrar o programa.");
            break;
            default: printf("Op��o inv�lida!�");



        }
    } else {
        printf("\nSenha inv�lida! Tente novamente!!!\n\n");
        goto inicio;

    }
    return 0;
}
