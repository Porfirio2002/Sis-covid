#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char login[30];
    char senha[30];
} pessoa; pessoa p[1];

struct cadastro
{
int codigo;
char nome[20];
int cpf [20];
int telefone [20];
char email [30];
char endereco [50];
int datadenacimento [20];
int datadediagnostico [10];
char comorbidadedopaciente [20];
char login [20];
};
struct cadastro empregado;

void adicionar();
void login();

int main()
{
struct cadastro c;
int opcao = 10;

while (opcao != 2)
{
printf("=================CADASTRO DE PACIENTE================= \n");
printf("********** 1. Adicionar \n");
printf("********** 2. Login \n");


  printf(" Digite sua opcao: ");
  scanf("%d",&opcao);
  printf("\n");

  if (opcao == 1)
  {
     adicionar(c);
     system("clear");
  }
  else if (opcao == 2)
  {
     char login[30];
    char senha[30];
    strcpy(p[0].login, "admin");
    strcpy(p[0].senha, "admin");

    printf("\nlogin:");
    scanf("%s", login);

    printf("\nsenha:");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){
        printf("Usuário logado");
    }else{
        printf("Login e/ou senha incorretos");
    }
    return 0;
;
  }

}
}

void adicionar()
{
FILE *fp;
struct cadastro c;
int opcao = 1;
do
{
printf("\nCADASTRO DE PACIENTE\n\n");

	printf("\nDigite o nome: ");
	scanf("%s", c.nome);

	printf("\nDigite o CPF: ");
	scanf("%d", &c.cpf);

	printf("\nDigite o telefone: ");
	scanf("%d", &c.telefone);


	printf("\nDigite o email: ");
	scanf("%s", c.email);


	printf("\nDigite a Data de Nacimento: ");
	scanf("%d", c.datadenacimento);


	printf("\nDigite a Data de Diagnostico: ");
	scanf("%d", c.datadediagnostico);


	printf("\n Possui alguma comorbidade? : ");
	scanf("%s", c.comorbidadedopaciente);


	printf("Digite 1 para novo cadastro ou 0 para sair: ");
	scanf("%d", &opcao);
}
while (opcao == 2);
void login()
{
FILE *fp;
struct cadastro c;
int continua = 2;
{
printf("\nCADASTRO DE PACIENTE\n\n");
printf("\n Digite seu login\n\n");
scanf("%s", login);

}
//return 0;



}
}
