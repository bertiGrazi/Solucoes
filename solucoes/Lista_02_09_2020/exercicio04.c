/* Bibliotecas */
#include  <stdio.h>
#include  <stdlib.h>
#include  <locale.h>

/* Variáveis globais */
char   d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
char   escolha;
int    tentativas = 3;

/* CORPO DO PROGRAMA */
int  main()
{
  setlocale(LC_ALL, "");

  do
  {
	/* Solicitar que se digite a senha */
	printf ("\nDigite a sua senha: ");
	d1 = getch(); 	printf ("*");
	d2 = getch(); 	printf ("*");
	d3 = getch();   printf ("*");
	d4 = getch();   printf ("*");
	d5 = getch();   printf ("*");
	d6 = getch();   printf ("*");
	d7 = getch();   printf ("*");
	d8 = getch();   printf ("*");
	d9 = getch();   printf ("*");
	d10 = getch();   printf ("*");

    tentativas = tentativas - 1;

        if ( d1 == 'i' && d2 == 'r' &&  d3 == 'o' &&  d4 == 'n' &&  d5 == 'm'&&  d6 == 'a'&&  d7 == 'i'&&  d8 == 'd' &&  d9 == 'e' &&  d10 == 'n')
        {

            printf("\nSeja bem vindo!\n");
            printf("\nAcesso Vip!\n");
        }
        else
        {

            printf("\nSenha inválida!");
            printf("\nBARRADO NA ENTRADA!!!\n");
            getch();
        }
  } while ( !( d1 == 'i' && d2 == 'r' &&  d3 == 'o' &&  d4 == 'n' &&  d5 == 'm'&&  d6 == 'a'&&  d7 == 'i'&&  d8 == 'd' &&  d9 == 'e' &&  d10 == 'n' )
           &&
           (tentativas > 0) );

  return(0);
}
