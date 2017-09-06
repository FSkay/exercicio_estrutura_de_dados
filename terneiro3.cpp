#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<math.h>

//protótipo da função media
float media (float N, float *pesomedio, float *pesoterneiro);

int main(void){

		
		int idterneiro[10];
	    float pesomedio, menorpreco, maiorpreco;
		float  *pesoterneiro;
		float pesototal, maiormedia, menormedia, precoacima, precoabaixo, ax, somaa, somab;
		int i;
        int quantlote;
        int l = 0, c =0, cam = 0,cbm = 0;
        
	 printf("\n---Quantos terneiros possui o lote ---\n\n\n");
	 scanf("%d", &quantlote);
	 
         pesoterneiro = (float*) malloc(quantlote*sizeof(float));
	if (pesoterneiro) {
		for (i = 0; i < quantlote; i++) {
			printf("  Peso dos Terneiros %i: ", i + 1);
			scanf("%f", &pesoterneiro[i]);
			pesototal = pesototal + pesoterneiro[i];
			pesomedio = pesototal / quantlote;
		}
		for (i = 0; i < quantlote; i++) {
			printf(" Terneiro %i: %.2f\n", i + 1, *(pesoterneiro + i));
		}
		for (i = 0; i < quantlote; i++) {
		    	if (pesoterneiro[i] < pesomedio)
			    {
				menormedia++;
			    }
			    if (pesoterneiro[i]> pesomedio)
			     {
			   	maiormedia++;
			     }   
		}
	
		 printf("\n\n --- Dados do lote de terneiros ----\n\n");
	   printf("Quantidade lote.....: %d\n",quantlote);
	   printf("Identificacao terneiro.....: %d\n", idterneiro);
	   printf("Peso do terneiro...: %.2f \n", pesoterneiro);
  	 printf("Peso total...: %.2f \n", pesototal);
     printf("Media de peso dos terneiros...: %.2f \n", pesomedio);
     printf("Menor media de peso dos terneiros...: %.2f \n", menormedia);
     printf("Maior media de peso dos terneiros...: %.2f \n", maiormedia);
     
	     printf("\n ..digite o preço menor\n :");
	     scanf("%f", &precoabaixo);
	     printf("\n ..digite o maior preço\n :");
	     scanf("%f", &precoacima);
	     
	 	  maiorpreco = ((pesoterneiro[i]> pesomedio)*precoacima);
		  menorpreco = ((pesoterneiro[i] < pesomedio)*precoabaixo);
          printf("Maior preço dos terneiros...: %.2f \n", maiorpreco);
          printf("Menor preço dos terneiros...: %.2f \n", menorpreco);
     
	}
		
		    
		getch();
	return (0);
	



}
