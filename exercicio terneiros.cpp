/* 6) Parâmetros + Funções + Alocação
Data limite para entrega: Não definida
Faça um programa que leia o número de terneiros em uma fazenda e armazene o peso de cada terneiro,
em um vetor alocado dinamicamente. Utilize passagem de Parâmetros. Depois o programa deve calcular e apresentar: 

--O peso médio de todos os terneiros. 
--O número de terneiros com peso abaixo da média. 
--O Número de terneiros acima da média. 
--O preço médio por animal. 
--O preço médio por animal acima da média e o preço médio por animal abaixo da média. 
*/


#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<math.h>



//protótipo da função media
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







