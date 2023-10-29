#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

char maiuc[26] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
char minuc[26] = "abcdefghijklmnopqrstuvxyz";
char num[11] = "0123456789";
char espec[9] = "!@#$%&*?";
int tam_maiuc = 0, tam_minuc = 0, tam_num = 0, tam_espec = 0;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tam_senha, conf_maiuc, conf_minuc, conf_num, conf_espec, num_aleat;
    srand(time(NULL));

    //tamanho da senha
    printf("Informe o tamanho da senha(Max. 69 caracteres): ");
    scanf("%d", &tam_senha);
    //caracteres que ser�o utilizados
    printf("Deseja utilizar letras mai�sculas? (1 - SIM / 2 - N�O): ");
    scanf("%d", &conf_maiuc);
    printf("Deseja utilizar letras minusc�las? (1 - SIM / 2 - N�O): ");
    scanf("%d", &conf_minuc);
    printf("Deseja utilizar n�meros? (1 - SIM / 2 - N�O): ");
    scanf("%d", &conf_num);
    printf("Deseja utilizar caracteres especiais? (1 - SIM / 2 - N�O): ");
    scanf("%d", &conf_espec);
    system("cls");
    //Quantidade de cada caracter
    while(tam_senha > 0){
    	if(conf_maiuc == 1){
    		printf("Quantas letras mai�sculas voc� quer na senha? ");
    		scanf("%d", &tam_maiuc);
    		tam_senha -= tam_maiuc;
    		printf("%d caracteres restantes\n", tam_senha);
		}
		if(conf_minuc == 1){
    		printf("Quantas letras min�sculas voc� quer na senha? ");
    		scanf("%d", &tam_minuc);
    		tam_senha -= tam_minuc;
    		printf("%d caracteres restantes\n", tam_senha);
		}
		if(conf_num == 1){
    		printf("Quantas n�meros voc� quer na senha? ");
    		scanf("%d", &tam_num);
    		tam_senha -= tam_num;
    		printf("%d caracteres restantes\n", tam_senha);
		}
		if(conf_espec == 1){
    		printf("Quantas caracteres especiais voc� quer na senha? ");
    		scanf("%d", &tam_espec);
    		tam_senha -= tam_espec;
    		printf("%d caracteres restantes\n", tam_senha);
		}
	}
	system("cls");
	puts("Sua senha �: ");
	//Gerando senha
	while(1){
		if(tam_maiuc > 0){
			num_aleat = rand() % 25;
			printf("%c", maiuc[num_aleat]);
			tam_maiuc--;
		}
		if(tam_minuc > 0){
			num_aleat = rand() % 25;
			printf("%c", minuc[num_aleat]);
			tam_minuc--;
		}
		if(tam_num > 0){
			num_aleat = rand() % 10;
			printf("%c", num[num_aleat]);
			tam_num--;
		}
		if(tam_espec > 0){
			num_aleat = rand() % 8;
			printf("%c", espec[num_aleat]);
			tam_espec--;
		}
		if(tam_maiuc == 0 && tam_minuc == 0 && tam_num == 0 && tam_espec){
			break;
		}
		
	}
}




