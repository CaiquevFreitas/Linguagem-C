#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"Portuguese");
     char login_cad[30], senha_cad[20], login_ent[30], senha_ent[20];
     int tam_login, tam_senha, conf_login, conf_senha;
     
     //Recebendo dados
     printf("=====Cadastro=====");
     printf("\nInforme um nome para login(max. 15 letras, min. 5 letras): ");
     fgets(login_cad, 30, stdin);
     fflush(stdin);
     printf("Informe uma senha de 8 caracteres: ");
     fgets(senha_cad, 20, stdin);
     fflush(stdin);
     //Validando dados
     tam_login = strlen(login_cad);
     tam_senha = strlen(senha_cad);
     while (tam_login < 6 || tam_login > 16){
         printf("\nLogin inválido, digite novamente(max. 15 letras, min. 5 letras): ");
         fgets(login_cad, 30, stdin);
         fflush(stdin);
         tam_login = strlen(login_cad);
     }
     while (tam_senha != 9){
         printf("\nSenha inválida, informe uma senha de 8 caracteres: ");
         fgets(senha_cad, 20, stdin);
         fflush(stdin);
         tam_senha = strlen(senha_cad);
     }
     //Digitando Login e Senha
     printf("\n=====Entrar=====");
     printf("\nLogin: ");
     fgets(login_ent, 30, stdin);
     fflush(stdin);
     printf("Senha: ");
     fgets(senha_ent, 20, stdin);
     fflush(stdin);
     //Comparando informações
     conf_login = strcmp(login_cad, login_ent);
     conf_senha = strcmp(senha_cad, senha_ent);
     while(conf_login != 0 || conf_senha != 0){
         printf("\nLogin ou senha errados, digites os novamente");
         printf("\nLogin: ");
         fgets(login_ent, 30, stdin);
         fflush(stdin);
         printf("Senha: ");
         fgets(senha_ent, 20, stdin);
         fflush(stdin);
         conf_login = strcmp(login_cad, login_ent);
         conf_senha = strcmp(senha_cad, senha_ent);
     }
     if (conf_login == 0 && conf_senha == 0){
         printf("\nLogin efetuado com sucesso!!!");
     }
}

