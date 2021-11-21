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
printf("=================BEM VINDO================= \n");
printf("********** 1. Login \n");
printf("********** 2. Adicionar \n");


  printf(" Digite sua opcao: ");
  scanf("%d",&opcao);
  printf("\n");

  if (opcao == 2)
  {
     adicionar(c);
     system("clear");
  }
  else if (opcao == 1)
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
int opcao = 2;
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


	int valor;
        int resposta;
        int yes = 1;
        int no = 2;

        printf("\n              Possui alguma comorbidade?\n");

        printf("[1] = SIM \n");
        printf("[2] = NÃO \n");
        scanf("%d", &resposta);

                                    system("cls");

                                    if(resposta==yes){
        printf("         Digite abaixo a comorbidade correspondente: \n\n ");

            printf("[1] - Diabete \n");
            printf(" [2] - Cardiopatias \n");
            printf(" [3] - Obesidade \n");
            printf(" [4] - Cancêr \n");
            printf(" [5] - Pneumopatias \n");
            printf(" [6] - Doenças hepáticas \n");
            printf(" [7] - Sindrome de Down \n");






        scanf("%d", &valor);


        switch(valor)
            {
            case 1 :
                printf("1 - Diabete \n");
            break;
            case 2 :

                printf("2 - Cardiopatias \n");
                break;
            case 3 :
                printf("3 - Obesidade \n");
                break;
            case 4 :
                printf("4 - Cancêr \n");
                break;
            case 5 :
                printf("5 - Pneumopatias \n");
                break;
            case 6 :
                printf("6 - Doenças hepáticas \n");
                break;
            case 7 :
                printf("7 - Sindrome de Down \n");
                break;



        default :
            printf("Erro: Valor inválido! Digite um valor de 1 a 7\n");
            return 0;
            }}

        else {
        printf("\n              Faz uso contínuo de medicamentos?\n");

        printf("[1] = SIM \n");
        printf("[2] = NÃO\n");
        scanf("%d", &resposta);

        }
                            system("cls");

        if(resposta==yes){
        printf("\n              Faz uso contínuo de medicamentos?\n");

        printf("[1] = SIM \n");
        printf("[2] = NÃO\n");
        scanf("%d", &resposta);

        }

        if(resposta==yes){
            printf("Digite abaixo o tipo de medicamento: \n");

            printf("[1] - Tarja Amarela \n");
            printf("[2] - Tarja Vermelha \n");
            printf("[3] - Tarja Preta \n");

        }
        else{


        printf("\n              Comorbidade não listada?\n");

        printf("[1] = SIM \n");
        printf("[2] = NÃO \n");
        scanf("%d", &resposta);

                                    system("cls");

                                   if(resposta==yes){

             FILE *pont_arq;
char outra[20];


  pont_arq = fopen("paciente.txt", "a");


  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo!");
  return 1;
  }

  printf("Comorbidade não listada: ");
  scanf("%s", outra);


  fprintf(pont_arq, "%s", outra);

  fclose(pont_arq);

  printf("Dados gravados com sucesso!");

  return(0);
        }

        scanf("%d", &valor);


        switch(valor)
            {
            case 1 :
                printf("1 - Tarja amarela \n");
            break;
            case 2 :
                printf("2 - Tarja vermelha \n");
                break;
            case 3 :
                printf("3 - Tarja preta \n");
                break;

            default:
                printf("Erro: Valor inválido! Digite um valor de 1 a 3\n");
            return 0;

            scanf("%d", &valor);

            }


}



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


