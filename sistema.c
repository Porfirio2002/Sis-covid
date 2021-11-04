#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char login[30];
    char senha[30];
} pessoa; pessoa p[1];

int main(){

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


    char Nome[45];
    char CPF[15];
    char Telefone[13];
    char Endereco[100];
    char Data_de_nascimento[10];
    char Email[50];
    char Data_do_diagnostico[10];


    printf("Nome:");
    scanf("%45s", Nome);



    printf("CPF:");
    scanf("%15s", CPF);



    printf("Telefone:");
    scanf("%13s", Telefone);



    printf("Endereco:");
    scanf("%100s", Endereco);



    printf("Data_de_nascimento:");
    scanf("%10s", Data_de_nascimento);



    printf("Email:");
    scanf("%50s", Email);



    printf("Data_do_diagnostico:");
    scanf("%10s", Data_do_diagnostico);




printf("\nNome: %s", Nome);
printf("\nCPF: %s", CPF);
printf("\nTelefone: %s", Telefone);
printf("\nEndereco: %s", Endereco);
printf("\nData_de_nascimento: %s", Data_de_nascimento);
printf("\nEmail: %s", Email);
printf("\nData_do_diagnostico: %s", Data_do_diagnostico);

}

