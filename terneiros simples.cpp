


#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<math.h>

//protótipo da função media
float media (float N, float *pesomedio, float *pesoterneiro);

int main(void){

		
		int idterneiro[10];
	    float pesomedio;
		float  pesoterneiro[10],pesototal, maiormedia, menormedia, precoacima, precoabaixo;
		int i, Q;
        int quantlote[10];
        int N = 0;
        
	 printf("\n---Quantos terneiros possui o lote ---\n\n\n");
	 scanf("%d", &quantlote[N]);
	 

	    N = quantlote[N];   
	for(i=0;i<= N;i++){
		
	 printf("\n---Cadastro de terneiro ---\n\n\n");
	 printf("Identificacao terneiro (numero do brinco)...: ");
	 scanf("%d", &idterneiro[i]);
	 

		
 
	 printf("Digite peso do terneiro...:");
	 scanf("%f", &pesoterneiro[i]);
	 i++;
     //while (i <=terneiro.quantlote);

       }
      // terneiro.pesototal = soma (terneiro.pesoterneiro);
	  // terneiro.pesomedio = (terneiro.pesototal) / (terneiro.quantlote);	

	 printf("\n\n --- Dados do lote de terneiros ----\n\n");
	 printf("Quantidade lote.....: %d\n",*quantlote);
	 printf("Identificacao terneiro.....: %d\n", *idterneiro);
	 printf("Peso do terneiro...: %.2f \n", *pesoterneiro);
	 printf("Peso total...: %.2f \n", pesototal);
     printf("Media de peso dos terneiros...: %.2f \n", pesomedio);
	
         
		getch();
	return (0);
	



}

