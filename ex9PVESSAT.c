/*
Fazer um “programinha” para cadastrar Funcionários de uma Firma. O programa deve:
a)Conter um “menuzinho” conforme exemplo:
 Cadastro de Funcionários
1- Incluir novo Funcionário
2-Exibir Funcionário cadastrados
3-Pesquisar Funcionários
4-Excluir Funcionários
5- Sair do Programa
b)Fazer inclusão dos funcionários(maximo 99 alunos) por meio de uma lista linear.
c)Exibir a lista na tela quando solicitado
d)Pesquisar funcionário
e) %ferecer uma opção para sair do programa
f) Dados a serem armazenados:
Código Funcionário: tipo inteiro;
Nome: vetor char máximo 30 caracteres;
CPF: do tipo float.
Telefone: tipo inteiro
Endereço: tipo char 60 caracteres
e-mail: tipo char 30 caracteres
Aluno: Felipe Menegat
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 99

/* ESTRUTURAS */

//ESTRUTURA FUNCIONÁRIO
typedef struct cadastro{
	int codigo;
	char nome[30];
	float cpf;
	int telefone;
	char email[30];
}funcionario[MAX];

int topo = 0;
void inserir();
void excluir();
void listar();
void pesquisar();
void alterar();

/* FUNÇÕES */

//FUNÇÃO CADASTRO DE FUNCIONÁRIO

void inserir(){    
     
     printf("CÓDIGO : %d\n", funcionario[topo].cod);
     funcionario[topo].cod = topo+1;
	 setbuf(stdin, NULL);
     printf("NOME: ");
     fgets(funcionario[topo].nome,30,stdin);
     funcionario[topo].nome[strlen(funcionario[topo].nome)-1];
    
     setbuf(stdin, NULL);
     printf("CPF : ");
     scanf("%f", &funcionario[topo].cpf,stdin); setbuf(stdin, NULL);
    
     printf("TELEFONE: ");
     scanf("%d", &funcionario[topo].telefone); setbuf(stdin, NULL);
     
     printf("E-MAIL: ");
     fgets(funcionario[topo].email,30,stdin);
     funcionario[topo].email[strlen(funcionario[topo].email)-1]; setbuf(stdin, NULL);
     printf("\n");
     
     topo = topo + 1;
}

//FUNÇÃO PESQUISAR

void pesquisar(){
     
	 int i,dado,cont = 0;
     printf("PESQUISA POR CÓDIGO: ");
     scanf("%d",&dado);
     for(i = 0;i < topo; i++){
       
	   if(dado == funcionario[i].cod){
          
		  printf("Dado Encontrado \n\n");
          printf("CÓDIGO: %d",funcionario[i].cod);
          printf("NOME: %s",funcionario[i].nome);
          printf("CPF: %f",funcionario[i].cpf);           
          printf("TELEFONE: %d",funcionario[i].telefone);
          printf("E-MAIL: %s",funcionario[i].email);
          printf("\n");
         cont = cont + 1;
       }
     }
     if(cont == 0){
       
	   printf(" Registro não Encontrado!\n\n");
     }
}

//FUNÇÃO PARA ALTERAR CADASTRO DO FUNCIONÁRIO

void alterar(){
    
	 int i,dado,cont = 0;
     
     printf(" ATENÇÃO! PARA ALTERAR UM REGISTRO \n");
     printf(" EFETUE UMA PESQUISA PELO SEU CÓDIGO. \n\n");
     printf(" CÓDIGO DO REGISTRO: ");
     scanf("%d",&dado);
     for(i = 0;i < topo; i++){
       
	   if(dado == funcionario[i].cod){
         cont = cont + 1;
                  
           printf("NOME: ");
           fgets(funcionario[topo].nome,30,stdin);
           funcionario[topo].nome[strlen(funcionario[topo].nome)-1];
          
		   printf("CPF: ");
           scanf("%f", &funcionario[topo].cpf);
          
		  printf("TELEFONE: ");
          scanf("%d", &funcionario[topo].telefone);
          
		  printf("E-MAIL: ");
          scanf(funcionario[topo].email,30,stdin);
          funcionario[topo].email[strlen(funcionario[topo].email)-1];
         
       }
     }
     if(cont == 0) {
       
	   printf(" DADO nao ENCONTRADO!\n\n"); 
     }
}

void excluir(){
     
	 topo  = topo - 1;
}

void listar(){
     
	 int i;
     
     for(i = 0;i < topo; i++){
           
		   printf("ARQUIVO %d\n",(i+1));
           printf("CÓDIGO: %d",funcionario[i].cod);
           printf("NOME: %s",funcionario[i].nome);
           printf("CPF: %f",funcionario[i].cpf);           
           printf("TELEFONE: %d",funcionario[i].telefone);
           printf("E-MAIL: %s",funcionario[i].email);
           printf("\n\n");
     }
}

int main(void){
	system("color a0");
	int opcao; //VARIÁVEL PARA OPÇÕES 	
	char seguir = 's'; //PARA CONTINUAR A USAR O PROGRAMA
	
	topo = 0; // INICIA COM 0 ELEMENTOS NO VETOR
	
	while(seguir == 's'){
		
		printf("----------CADASTRO DE FUNCIONÁRIO----------");
		printf("1 - CADASTRAR UM NOVO FUNCIONÁRIO \n");
        printf("2 - EXIBIR FUNCIONÁRIOS CADASTRADOS \n");
        printf("        3) LISTAR \n");
        printf("        4) PESQUISAR \n");
        printf("        5) ALTERAR \n\n");
        printf(" Digite sua opcao: ");
        scanf("%d%*c",&opcao);
        printf("\n");	
	}
	switch (opcao){
		case 1:{
			printf("Digite os dados para realizar o cadastro:\n");
			if(topo < MAX){
				inserir(); //CHAMA FUNÇÃO INSERIR
				printf("CADASTRO REALIZADO COM SUCESSO!\n");
			}
			else{
				
				printf("NÃO FOI POSSÍVEL REALIZAR O CADASTRO, POIS EXEDEU O LIMITE!");
			}
			break;
		} 	
		
		case 2:{
			if(topo == 0){
				printf("NÃO POSSUIE DADOS PARA SEREM EXCLUIDOS!\n");	
			}
			else{
				excluir(); //FUNÇÃO EXCLUIR
				printf("CADASTRO DE FUNCIONÁRIO EXCLUIDO COM SUCESSO!\n");
			}
			break;
		}
		
		case 3:{
			if(topo == 0){
				printf("SISTEMA NÃO POSSUI CADASTROS!\n");	
			}
			else{
				printf("");
				listar(); //FUNÇÃO LISTAR
			}	
			break;
		}
		
		case 4:{
			if(topo == 0){
				printf("");
			}
			else{
				printf("");
				pesquisar();
			}
			break;
		}
	}
return 0;
}
