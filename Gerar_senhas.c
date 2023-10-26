#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

char maiuc[26] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
char minuc[26] = "abcdefghijklmnopqrstuvxyz";
char num[11] = "0123456789";
char espec[9] = "!@#$%&*?";
char senha[70];
int tam_maiuc = 0, tam_minuc = 0, tam_num = 0, tam_espec = 0;

int gerar_senha();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tam_senha, conf_maiuc, conf_minuc, conf_num, conf_espec;
    gerar_senha();
    
    //tamanho da senha
    printf("Informe o tamanho da senha(Max. 69 caracteres): ");
    scanf("%d", &tam_senha);
    //caracteres que serão utilizados
    printf("Deseja utilizar letras maiúsculas? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_maiuc);
    printf("Deseja utilizar letras minuscúlas? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_minuc);
    printf("Deseja utilizar números? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_num);
    printf("Deseja utilizar caracteres especiais? (1 - SIM / 2 - NÃO): ");
    scanf("%d", &conf_espec);
    //Quantidade de cada caracter
    while(tam_senha > 0){
    	if(conf_maiuc == 1){
    		printf("Quantas letras maiúsculas você quer na senha? ");
    		scanf("%d", &tam_maiuc);
    		tam_senha -= tam_maiuc;
    		printf("%d caracteres restantes\n", tam_senha);
		}
		if(conf_minuc == 1){
    		printf("Quantas letras minúsculas você quer na senha? ");
    		scanf("%d", &tam_minuc);
    		tam_senha -= tam_minuc;
    		printf("%d caracteres restantes\n", tam_senha);
		}
		if(conf_num == 1){
    		printf("Quantas números você quer na senha? ");
    		scanf("%d", &tam_num);
    		tam_senha -= tam_num;
    		printf("%d caracteres restantes\n", tam_senha);
		}
		if(conf_espec == 1){
    		printf("Quantas caracteres especiais você quer na senha? ");
    		scanf("%d", &tam_espec);
    		tam_senha -= tam_espec;
    		printf("%d caracteres restantes\n", tam_senha);
		}
	}

    printf("Sua senha é: %s", senha);

}

int gerar_senha(){
	int c1, c2, c3, c4, a;
	char M[26], m[26], n[11], e[9];
	
	for(c1 = 0; c1 < tam_maiuc; c1++){
		a = rand() % 25;
		M[c1] = maiuc[a];
	}
	for(c2 = 0; c2 < tam_minuc; c2++){
		a = rand() % 25;
		m[c2] = minuc[a];
	}
	for(c3 = 0; c3 < tam_num; c3++){
		a = rand() % 10;
		n[c3] = maiuc[a];
	}
	for(c4 = 0; c4 < tam_espec; c4++){
		a = rand() % 8;
		e[c4] = maiuc[a];
	}
}

int embaralhar(){
	
}














