/* 6) Par�metros + Fun��es + Aloca��o
Data limite para entrega: N�o definida
Fa�a um programa que leia o n�mero de terneiros em uma fazenda e armazene o peso de cada terneiro,
em um vetor alocado dinamicamente. Utilize passagem de Par�metros. Depois o programa deve calcular e apresentar: 

--O peso m�dio de todos os terneiros. 
--O n�mero de terneiros com peso abaixo da m�dia. 
--O N�mero de terneiros acima da m�dia. 
--O pre�o m�dio por animal. 
--O pre�o m�dio por animal acima da m�dia e o pre�o m�dio por animal abaixo da m�dia. 
*/


#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<math.h>



//prot�tipo da fun��o media
float media (float N, float *pesomedio);

int main(void)



{				
	int i, N;
	
	//struct terneiro ficha_terneiro terneiro[];
	/*criando struct*/
	struct ficha_terneiro
	{
				
		int idterneiro;
	    float pesomedio;
		float  pesoterneiro,pesototal, maiormedia, menormedia, precoacima, precoabaixo;
		int i, N, Q;
        int quantlote=0;
    
		
	};
	/*criando variavel aluno que sera do tipo struct ficha_terneiro */
	ficha_terneiro terneiro;

	 
	
	 	
	
			
	 printf("\n---Quantos terneiros possui o lote ---\n\n\n");
	 scanf("%d", &terneiro.quantlote);
	 

	       
	for(i=0;i<=terneiro.quantlote;i++){
		
	 printf("\n---Cadastro de terneiro ---\n\n\n");
	 printf("Identificacao terneiro (numero do brinco)...: ");
	 scanf("%d", &terneiro.idterneiro);
	 

		
 
	 printf("Digite peso do terneiro...:");
	 scanf("%f", &terneiro.pesoterneiro);
	 i++;
     //while (i <=terneiro.quantlote);

       }
      // terneiro.pesototal = soma (terneiro.pesoterneiro);
	  // terneiro.pesomedio = (terneiro.pesototal) / (terneiro.quantlote);	

	 printf("\n\n --- Dados do lote de terneiros ----\n\n");
	 printf("Quantidade lote.....: %d\n", terneiro.quantlote);
	 printf("Identificacao terneiro.....: %d\n", terneiro.idterneiro);
	 printf("Peso do terneiro...: %.2f \n", terneiro.pesoterneiro);
	 printf("Peso total...: %.2f \n", terneiro.pesototal);
     printf("Media de peso dos terneiros...: %.2f \n", terneiro.pesomedio);
	
         
		getch();
	return (0);
	
}







