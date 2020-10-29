#include <stdio.h>
#include <locale.h>
#include <time.h>      // time
#include <stdlib.h>   // rand    srand
int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num, magico, diferenca, tentativa=0, vida = 7;
	
	srand(time(NULL));
	magico = (rand()% 97) + 32;  
	//printf ("%d",magico);   //para vender o JOGO, devemos apagar essa linha
	
	printf ("\n\nJá tenho o número em mente. Agora é sua vez de adivinhar.");
	
	while (vida > 0) 
	{	
		
	    printf ("\n\nEntre com um valor entre 32 e 128: ");
	    scanf ("%d",&num);
			
		
		if(num == magico){
			tentativa++;
			printf("\n Vencedor após %d tentativas",tentativa);
			vida = -7;
			} 
		    			                       
	    else {		
	    			 tentativa++;
		             diferenca = num - magico;
		             if (diferenca <0)  diferenca = diferenca * -1;
		             
		             if (diferenca >=64)  				printf ("\n*");			// 1 estrela
		             	else if (diferenca >=32)      	printf ("\n**");		// 2 estrelas
		             	else if (diferenca >=16) 		printf ("\n***");   	// 3 estrelas
		             	else if (diferenca >=8) 		printf ("\n****");		// 4 estrelas
		             	else if (diferenca >=4) 		printf ("\n*****");		// 5 estrelas
		             	else if (diferenca >=2) 		printf ("\n******");	// 6 estrelas
		             	else if	(diferenca ==1) 		printf ("\n*******");	// 7 estrelas
		             }
	    vida--;     //vida = vida - 1;	    
	    
	    if (vida ==0) printf ("\n\nGAME OVER");
		
    }  
    getch();
    
	return 0;
}
