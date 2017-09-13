/*1) Fazer um “programinha” para cadastrar Funcionários de uma Firma. 

O programa deve: 
1 conter um “menuzinho” conforme exemplo: 
Cadastro de Funcionários 
1-Incluir novo Funcionário 
2-Exibir Funcionário cadastrados 
3-Pesquisar Funcionários 
4-Excluir Funcionários 
5-Sair do Programa 

2) Fazer inclusão dos funcionários(maximo 99 alunos) por meio de uma lista linear. 
3) exibir a lista na tela quando solicitado 
4) pesquisar funcionário 
5) oferecer uma opção para sair do programa 
6) Dados a serem armazenados: 
Código Funcionário: tipo inteiro; 
Nome: vetor char máximo 30 caracteres; 
CPF: do tipo float. 
Telefone: tipo inteiro 
Endereço: tipo char 60 caracteres 
e-mail. 

7- Sugestões 

criar uma estrutura com as informações citadas acima. 

criar outra estrutura para armazenar a estrutura anterior. 

criar funções para inserir, listar, excluir dados do funcionário. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// CONSTANTES
#define NUM_MAX_FUNC 99

typedef struct {
  int   cod;  // chave de pesquisa (unica)
  char  nome[30];
  float cpf;
  int telefone;
  char endereco[60];
}
Aluno;

typedef struct
{
  Funcionario funcionario[NUM_MAX_FUNC];
  int   nFunc;
}
Empresa; // LISTA SEQUENCIAL



//-------------------------------------------------------------
// LISTAR TODOS FUNCIONARIOS
//-------------------------------------------------------------

void listar(const Empresa *pEmpresa)
{
  int i;
  
  system("cls");
  printf("%4s  %-20s  %4s\n\n","MATR","NOME","RG");
  for (i=0; i<pEmpresa->nFunc; i++)
  {
    printf("%4d  %-20s  %4.1f\n",
           pEmpresa->funcionario[i].cod,
           pEmpresa->funcionario[i].nome,
           pEmpresa->funcionario[i].cpf,
           pEmpresa->funcionario[i].telefone,
           pEmpresa->funcionario[i].enedereco;
  }
}

//-------------------------------------------------------------
// INSERIR UM NOVO FUNCIONARIO
//-------------------------------------------------------------

int inserir(Empresa *pEmpresa, const Funcionario *pNovoFuncionario)
{
  int i;

  // 1. Verifica se existe espaço para inserção de um novo item
  
  if (pEmpresa->nFunc == NUM_MAX_FUNC)
  {
    return 1;  // ERRO 1: Lista Cheia
  }
  
  // 2. Verificar se existe item com mesma chave na coleção
  
  for (i=0; i<pEmpresa->nFunc; i++)
  {
    if (pNovoFuncionario->cod == pEmpresa->Funcionario[i].cod)
    {
      return 2; // ERRO 2: Matricula Duplicada
    }
  }
  
  // 3. Armazenar o novo item após o último item da lista
  
  pEmpresa->funcionario[pEmpresa->Funcionario] = *pNovoFuncionario;
  
  // 4. Incrementar a quantidade de itens

  pEmpresa->nFuncionario++;
  
  // 5. Retornar indicando inclusao bem-sucedida
  
  return 0;

}

//-------------------------------------------------------------
// BUSCAR DADOS DE UM FUNCIONARIO
//-------------------------------------------------------------

Al *recuperar(const Empresa *pEmpresa, const int cod)
{
  int i;
  for (i=0; i<pEmpresa->nFunc; i++)
  {
    if (pEmpresa->fucnionario[i].cod == cod)
    {
      return (Funcionario *) &(pEmpresa->funcionario[i]); // Aluno encontrado
    }
  }
  return (Funcionario *)NULL;
}

//-------------------------------------------------------------
// REMOVER FUNCIONARIO
//-------------------------------------------------------------

int excluir(Empresa *pEmpresa, const int cod)
{
  int i;
  
  // 1. Localizar o item correspondente à chave fornecida
  
  for (i=0; i<pEmpresa->nFunc; i++)
  {
    if (pEmpresa->funcionario[i].cod == cod) break;
  }
  if (i==pEmpresa->nFunc) return 1; // Aluno nao encontrado

  // 2. Deslocar todos os itens posteriores 1 posição a frente.
  
  while(i < pEmpresa->nFunc-1)
  {
    pEmpresa->funcionario[i] = pEmpresa->fucnionario[i+1];
    i++;
  }

  // 3. Decrementar a quantidade de alunos

  pEmpresa->nFunc--;


  // 4. Retornar indicando exclusao bem sucedida
  
  return 0;
  
}

//-------------------------------------------------------------
// PROGRAMA PRINCIPAL
//-------------------------------------------------------------


int main()
{
  setlocale(LC_ALL, "");	
  Funcionario meuFuncionario; //declara variavel do tipo estrutura para alunos
  Empresa minhaEmpresa; //declara estrutura  para o tamanho da turma 
  int resultado,opcao,m; //declara variaveis de escolha
  Funcionario *pFuncionario; //cria ponteiro para estrutura do tipo Aluno

  
  
  minhaEmpresa.nFunc = 0; // numero de alunos recebe zero
  
  // Menu principal

  do
  {
    system("cls");
    printf("\n");
    printf(" CADASTRO DE FUNCIONARIOS\n");
    printf("\n");
    printf(" 1 - INCLUIR UM NOVO FUNCIONARIO\n");
    printf(" 2 - EXIBIR LISTA\n");
    printf(" 3 - PESQUISAR FUNCIONARIO\n");
    printf(" 4 - EXCLUIR FUNCIONARIO\n");
    printf(" 5 - SAIR DO PROGRAMA\n");
    printf("\n");
    printf("OPCAO DESEJADA: "); 
	scanf("%d",&opcao);
    
    // 1 - INSERIR NOVO ALUNO
    
    if (opcao == 1)
    {
      system("cls");
      printf("\nINCLUIR NOVO FUNCIONARIO\n\n");
      printf("Código: "); scanf("%d",&(meuAluno.matricula));
      printf("Nome:      "); scanf("%s",meuAluno.nome);
      printf("R.G.:      "); scanf("%f",&(meuAluno.rg));

      resultado = inserir(&minhaTurma,&meuAluno);

      if (resultado==0) printf("\n\nInclusao bem sucedida\n\n");
      if (resultado==1) printf("\n\nErro 1: Lista cheia\n\n");
      if (resultado==2) printf("\n\nErro 2: Matricula Duplicada\n\n");
    }
    
    // 2 - EXIBIR LISTA

    if (opcao == 2)
    {
      listar(&minhaTurma);
    }

    // 3 - PESQUISAR ALUNO

    if (opcao == 3)
    {
      system("cls");
      printf("\nPESQUISAR ALUNO\n\n");
      printf("Matricula: "); scanf("%d",&m);
      pAluno = recuperar(&minhaTurma,m);

      if (pAluno)
      {
         printf("\nNome = %s\n",pAluno->nome);
         printf(  "R.G. = %4.1f\n\n",pAluno->rg);
      }
      else
      {
        printf("\n\n ERRO: Aluno nao encontrado\n\n");
      }
    }

    // 4 - EXCLUIR ALUNO

    if (opcao == 4)
    {
      system("cls");
      printf("\nEXCLUIR ALUNO\n\n");
      printf("Matricula: "); scanf("%d",&m);
      resultado = excluir(&minhaTurma,m);

      if (resultado==0) printf("\n\nExclusao bem sucedida.\n\n");
      if (resultado==1) printf("\n\nAluno nao encontrado.\n\n");
    }

    system("pause");
  }
  while (opcao != 5);


  return 0;
}
