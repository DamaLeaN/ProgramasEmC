#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale (LC_ALL,"Portuguese");
	int n1, n2;
	char op;
	
	printf("Olá, Bem vindo a Calculadora");
	
	printf("\n\nDigite o primeiro número: ");
	scanf("%d",&n1);
	
	printf("\n\nIforme a operação desejada \n( + ) ( - ) ( * ) ( / ): ");
	scanf("%s",&op);
	
	printf("\n\nDigite o segundo número: ");
	scanf("%d",&n2);
	
	switch (op)
	{
		case '+': printf("\nResultado da Soma é: %d" ,n1 + n2 ); break;
		case '-': printf("\nResultado da Subtração é: %d" ,n1 - n2 ); break;
		case '*': printf("\nResultado da Multiplação é: %d",n1 * n2 ); break;
		case '/': printf("\nResultado da Divisão é: %d" ,n1 / n2 ); break;
		default:  printf("\nOperação invalida.");	
	}
	
	getch ();
	return 0;
} 

