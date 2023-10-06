#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

struct gerador_senhas{
    char maiuc[26] = {"ABCDEFGHIJKLMNOPQRSTUVXYZ"};
    char minuc[26] = {"abcdefghijklmnopqrstuvxyz"};
    char num[11] = {"0123456789"};
    char espec[9] = {"!@#$%&*?"};
};

typedef struct gerador_senhas gerador_senhas;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tam_senha, conf_maiuc, conf_minuc, conf_num, conf_espec;
    gerador_senhas senha[];
    
    //tamanho da senha
    printf("Informe o tamanho da senha(Max. 69 caracteres): ");
    scanf("%d", &tam_senha);
    //caracteres que serão utilizados
    printf("Deseja utilazar letras maiúsculas? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_maiuc);
    printf("Deseja utilazar letras minuscúlas? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_minuc);
    printf("Deseja utilazar números? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_num);
    printf("Deseja utilazar caracteres especiais? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_espec);
    
    
    
}