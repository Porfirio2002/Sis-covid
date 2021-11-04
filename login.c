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
}
