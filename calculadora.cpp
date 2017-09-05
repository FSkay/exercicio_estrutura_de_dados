/*Utilizando o conceito de protótipos, escreva um programa com 5 opções: 
4 para realizar as operações matemáticas básicas, e 1 para encerrar o programa. Ex: 
1 – Adição?	2 – Subtração?	3 – Multiplicação 
4 – Divisão 
0 – Sair 
Aluno F.Menegat
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int opcao, valor1, valor2, resSom, resSub, resMult, resDiv; //variavel switch e outras que fazem parte da calculadora

//criando o protótipo de 4 funções
int somar (int x, int y);
int subtrair (int x, int y);
int multiplicar (int x, int y);
int dividir (int x, int y);

int main(){
  setlocale(LC_ALL, "");
  printf("\nDigite as seguintes opções para: \n");
  printf("\n1 - Adição\n");    
  printf("\n2 - Subtração\n");       
  printf("\n3 - Multiplicação\n");   
  printf("\n4 - Divisão\n");      
  printf("\n0 - Sair\n");  
         
		 scanf("%d", &opcao);
         
		 switch(opcao){
         case 1 :
    		system("cls");
			printf("\nDigite dois valores para somar: \n");
			scanf("%d" "%d", &valor1, &valor2);
		 	resSom=valor1 + valor2;
		 	printf("O resultado é igual a: %d", resSom);
		 	break;
         
         case 2 : 
        	system("cls");
			printf("\nDigite dois valores para subtrair: \n");
			scanf("%d" "%d", &valor1, &valor2);
		 	resSub=valor1 - valor2;
		 	printf("O resultado é igual a: %d", resSub);
		 	break; 
       
        case 3 :
        		system("cls");
           		printf("\nDigite dois valores para multiplicar: \n");
			scanf("%d" "%d", &valor1, &valor2);
		 	resMult=valor1 * valor2;
		 	printf("O resultado é igual a: %d", resMult);
			break; 
         
       case 4 :
       			system("cls");
           		printf("\nDigite dois valores para dividir: \n");
         		scanf("%d" "%d", &valor1, &valor2);
		 	resDiv=valor1 / valor2;
		 	printf("O resultado é igual a: %d", resDiv);
			break; 
       
	   case 0 :
        	printf("\n0 - Sair\n");   
        	return 0;
       
	   default :
        	printf ("Valor invalido!\n"); 
       }     


    //chamando todas as funções
    /*resSom=somar (valor1, valor2);
    resSub=subtrair (valor1, valor2);
    resMult=multiplicar (valor1, valor2);
    resDiv=dividir (valor1, valor2);
	*/
}
