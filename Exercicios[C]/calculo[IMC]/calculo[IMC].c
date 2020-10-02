#include <stdio.h>
#include <locale.h>

int main ()

{
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	
	printf("Informe seu peso:");
	scanf("%f",&peso);
	printf("Informe sua altura:");
	scanf("%f",&altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5 ) 								printf("\nMagro");
		else if (imc > 18.5 && imc <= 25) 			printf("\nNormal");
		else if (imc > 25 && imc <= 30)				printf("\nSobrepeso");
	else											printf("\nObeso");
	
	return 0;
}
