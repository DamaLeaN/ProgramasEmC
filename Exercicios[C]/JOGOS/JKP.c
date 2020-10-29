#include <stdio.h>
#include <locale.h>
#include <time.h>     
#include <stdlib.h>   

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int escolha, num;
	char op = 's';
	
	srand(time(NULL));
	escolha = rand() % 3;
	//printf ("%d",escolha);
	while ((op == 's')||(op == 'S'))	
	{
	
	printf ("\nJOKENPÔ \n\nInforme Pedra(0) | Papel (1) | Tesoura (2): ");
	scanf ("%d",&num);
	
	if(num == escolha)							printf("\n\nEmpate! Ninguem ganhou!");
		else if((num == 0) && (escolha==1))		printf("\nO computador jogou PAPEL e você jogou PEDRA\n\nComputador Ganhou");
		else if((num == 0) && (escolha==2))		printf("\nO computador jogou TESOURA e você jogou PEDRA\n\nJogador Ganhou");
		else if((num == 1) && (escolha==0))		printf("\nO computador jogou PEDRA e você jogou PAPEL\n\nJogador Ganhou");
		else if((num == 1) && (escolha==2))		printf("\nO computador jogou TESOURA e você jogou PAPEL\n\nComputador Ganhou");
		else if((num == 2) && (escolha==0))		printf("\nO computador jogou PEDRA e você jogou TESOURA\n\nComputador Ganhou");
		else if((num == 2) && (escolha==1))		printf("\nO computador jogou PAPEL e você jogou TESOURA\n\nJogador Ganhou");
	else										printf("Opção inválida!");
	
	
	
	printf("\n\nJogar Novamente?S/N:");
	scanf("%s",&op);
	}
		
	getch();	
	return 0;
}
