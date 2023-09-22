#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"Portuguese");
     char login_cad[30], senha_cad[20], login_ent[30], senha_ent[20];
     int conf_login, conf_senha;
     
     //Recebendo dados
     printf("=====Cadastro=====");
     printf("\nInforme um nome para login(max. 15 letras, min. 5 letras): ");
     fgets(login_cad, 30, stdin);
     fflush(stdin);
     printf("Informe uma senha de 8 caracteres: ");
     fgets(senha_cad, 20, stdin);
     fflush(stdin);
     //Validando dados
     strlen(login_cad);
     strlen(senha_cad);
     while (strlen(login_cad) < 6 || strlen(login_cad) > 16){
         printf("\nLogin inválido, digite novamente(max. 15 letras, min. 5 letras): ");
         fgets(login_cad, 30, stdin);
         fflush(stdin);
         strlen(login_cad);
     }
     while (strlen(senha_cad) != 9){
         printf("\nSenha inválida, informe uma senha de 8 caracteres: ");
         fgets(senha_cad, 20, stdin);
         fflush(stdin);
         strlen(senha_cad);
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

