#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(void)
{
 setlocale(LC_ALL,"Portuguese");
 srand(time(NULL)); // apenas UMA vez no in�cio do programa

 int vida= 3, magico, num, min=1, max; 

 while (vida > 0)
 {
	 printf ("\n\n\n");
	 printf("\nInforme um n�mero entre 1 a 6, para rodar os dados:");
	 scanf("%d", &max); // O maior n�mero
	
	 printf ("\n>>>JOGADOR<<<");
	 printf("\nO n�mero sorteado foi: %d\n\n", num = (rand () % (max-min+1) + min) ); //gera n�meros entre min e max
	
	 printf ("\n>>>COMPUTADOR<<<");
	 printf("\nO n�mero sorteado foi: %d\n\n", magico = (rand () % (max-min+1) + min) ); //gera n�meros entre min e max
	
		if( num == magico){
      	printf("Empate! Ningu�m ganhou");
      	
    }	
	
		else if(num > magico){
      	vida = vida + 1;
      	printf("Jogador ganhou! \n>>>>>> Jogador ganhou 1 vida <<<<<<<");
      	
    }
	
		else if(num < magico){
      	printf("Computador ganhou! \n>>>>>> Jogador perdeu 1 vida <<<<<<<");
      	
    }	
	    vida--;     //vida = vida - 1;	    
	    if (vida ==0) printf ("\n\nGAME OVER");
 }

 return 0;
}

