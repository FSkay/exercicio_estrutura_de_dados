/*
	Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos: 
	marca: string de tamanho 15 
	ano: inteiro 
	cor: string de tamanho 10 
	preço: real 
	O programa deve: 
	Escrever a definição da estrutura carro. 
	Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e global. 
	Crie um menu para: 
	Definir um bloco de programa para ler o vetor vetcarros. 
	Definir um bloco de programa que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido. 
	Defina um bloco de programa que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor). 
	Defina um bloco de programa que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço. 
	
	
	
	Trabalho Cadastro de veículos
	Nome: Felipe Menegat

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Estruturia para carros
	struct cadastro_carros { 	
		char corV[11]; 
		char marca[16];
		char modelo[20];
		int ano;
		float preco; 
	};
	cadastro_carros carros;

int main(){
	
	//Vetor e Contador
	int vetCarros[20], i, opcao;
	
	printf ("Digite a quantidade de carros que deseja cadastrar:\n");
  	scanf("%d", &[vetCarros]);
	
	printf("\n");
	printf("-------------CADASTRO DE CARROS----------\n");
	printf("1 - INSERIR INFORMAÇÕES DO VEÍCULO\n");
	printf("2 - DIGITAR PREÇO PARA VEREIFICAR QUAIS DISPONÍVEIS\n");
	printf("-------------CADASTRO DE CARROS----------\n");
	
	scanf("%d", &opcao);
 
  switch (opcao)
  {
     case 1 :
     	printf ("Marca: \n");
     	scanf  ("%s", &carros.marca);
	printf ("Modelo: \n");
	scanf  ("%s", &carros.modelo);
	printf ("Ano: \n");
	scanf  ("%d", &carros.ano);
	printf ("Preço: \n");
	scanf  ("%f", &carros.preco);	  
	break;
 
     case 2 :
     	
     	break;
 
     case 3 :
        printf ("");
     break;
 
     case 4 :
        printf ("Quarta\n");
     break;
  }
	for(i=0; i<=20; i++)	 

}
