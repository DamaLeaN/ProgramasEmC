#include <stdio.h>
#include <locale.h>
#include <time.h>      // time
#include <stdlib.h>   // rand    srand
int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num, inferior, superior, vida = 6, tentativa=0;
	
	srand(time(NULL));
	num = rand() % 101;   // resto da divis�o por 101 = 0 at� 100
	//printf ("%d",num);   //para vender o JOGO, devemos apagar essa linha
	
	printf ("\n\nJ� pensei no n�mero. Agora � sua vez de adivinhar um n�mero de 1 a 100");
	
	while (vida > 0)
	{	
		
	    printf ("\n\nDigite o limite inferior: ");
	    scanf ("%d",&inferior);	
	    
	    printf ("\n\nDigite o limite superior: ");
	    scanf ("%d",&superior);	
		
		
		if(inferior > superior){
		
		if((num == inferior)&&(num==superior)){
			tentativa++;
			printf("Voc� levou %d tentativas para acertar",tentativa);
			} 
		    			 
		else if ((num >=superior)&&(num <=inferior))  {
			tentativa++;
		    printf ("\n\nMeu n�mero est� entre os seus");
		}
		                       
	    else{
			tentativa++;
			printf ("Meu n�mero n�o est� entre os seus");}
		         

	    vida--;     //vida = vida - 1;	    
	    
	    if (vida ==0) printf ("\n\nGAME OVER");
		}
		
		else{
			
			if((num == inferior)&&(num == superior)){
			tentativa++;
			printf("\n\nVoc� levou %d tentativas para acertar",tentativa);
			vida = -8;
			}
					 
		else  if ((num >=inferior)&&(num <=superior))  {
			tentativa++;
		    printf ("Meu n�mero est� entre os seus");
		}
		                       
	    else {  tentativa++;
	    		printf ("Meu n�mero n�o est� entre os seus");
		} 
		         

	    vida--;     //vida = vida - 1;	    
	    
	    if (vida ==0) printf ("\n\nGAME OVER");
		}
    }  
    getch();
	return 0;
}
