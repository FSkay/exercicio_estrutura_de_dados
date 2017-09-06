/*
|---------------------------------------------------------------------------------------------|	
|	Utilizando o conceito de protótipos, escreva um programa com 5 opções: 		      |
|	4 para realizar as operações matemáticas básicas, e 1 para encerrar o programa. Ex:   |
|	1 – Adição 2 – Subtração 3 – Multiplicação 4 – Divisão 0 – Sair                       |
|	Aluno F.Menegat                                                                       |
|---------------------------------------------------------------------------------------------|
*/


#include <stdio.h>

// Variáveis globais
float r,a,b;
char tecla;

// Protótipos de funções
int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);
void entrada(void);
void saida(void);

// Função principal ou de execução
int main()
{
  int opcao = 0;
  
  while (opcao != 5)
  {
    puts("\n\nMenu Principal\n");
    puts("----------------\n\n");
    puts("1 - Adicao\n");
    puts("2 - Subtracao\n");
    puts("3 - Multiplicacao\n");
    puts("4 - Divisao\n");
    puts("5 - Fim de Programa\n\n");
    printf("Escolha uma opcao: ");
    fflush(stdin);
    scanf("%d",&opcao);
    
    if (opcao != 5)
    {
      switch (opcao)
      {
        case 1:
          rotadicao();
          break;
          
        case 2:
          rotsubtracao();
          break;
          
        case 3:
          rotmultiplicacao();
          break;
          
        case 4:
          rotdivisao();
          break;
          
        default:
          printf("Opcao invalida - Tecle <Enter>: ");
          fflush(stdin);
          while ((tecla = getchar()) != '\r')
            break;             
      }
    }
  }  
  return(0); // retorna 0 para o S.O
}

void entrada(void)
{
  printf("Informe o valor de A: ");
  fflush(stdin);
  scanf("%f",&a);
  printf("Informe o valor de B: ");
  fflush(stdin);
  scanf("%f",&b);
  return; // Retorna valor indefinido para função chamadora - main()
}

void saida(void)
{
  printf("\nO resultado entre A e B = %6.2f \n",r);
  printf("\nTecle <Enter> para acessar o menu: ");
  fflush(stdin);
  while ((tecla = getchar()) != '\r')
  return;
}

float calculo(float x, float y, char operador)
{
  float resultado;
  
  switch (operador)
  {
    case '+' :
      resultado = x + y;
      break;
      
    case '-' :
      resultado = x - y;
      break;
      
    case '*' :
      resultado = x * y;
      break;
    
    case '/' :
      resultado = x / y;
      break;
  }
  return (resultado);
}

int rotadicao(void)
{
  printf("\n\nRotina de Adicao\n");
  printf("------------------\n\n");
  entrada();
  r = calculo(a,b,'+');
  saida();
  return(0);
}

int rotsubtracao(void)
{
  printf("\n\nRotina de Subtracao\n");
  printf("---------------------\n\n");
  entrada();
  r = calculo(a,b,'-');
  saida();
  return(0);
}

int rotmultiplicacao(void)
{
  printf("\n\nRotina de Multiplicacao\n");
  printf("-------------------------\n\n");
  entrada();
  r = calculo(a,b,'*');
  saida();
  return(0);
}

int rotdivisao(void)
{
  printf("\n\nRotina de Divisao\n");
  printf("-------------------\n\n");
  entrada();
  
  if (b == 0)
  {
    printf("\nErro de divisao\n");
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    while ((tecla = getchar()) != '\r')
    return(0);
  }
  else
  {
    r = a / b;
    saida();
  }
  return(0);
}
