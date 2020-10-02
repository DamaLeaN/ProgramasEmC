#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"Portuguese"); 
	char sexo;
	float altura;
	
	printf ("Digite sua altura: ");
	scanf ("%f",&altura);
	
	printf ("Digite seu sexo: ");
	scanf ("%s",&sexo);
	
	switch (sexo)
	{
		case 'F': printf("\n Peso ideal é: %.2f",(62.1 * altura - 44.7)); break;
		case 'f': printf("\n Peso ideal é: %.2f",(62.1 * altura - 44.7)); break;
		case 'M': printf("\n Peso ideal é: %.2f",(72.7 * altura - 58 )); break;
		case 'm': printf("\n Peso ideal é: %.2f",(72.7 * altura - 58 )); break;
		default : printf("\n Sexo Inválido");
	}
	printf ("\n");
	
	getch();
	return 0;

}
