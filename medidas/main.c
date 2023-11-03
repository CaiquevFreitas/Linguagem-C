#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "medidas.h"

int dist[7] = {0, 1, 2, 3, 4, 5, 6};
struct nomes_medidas{
	char nome_c[4];
	char nome_v[4];
	char nome_m[4];
};

typedef struct nomes_medidas nomes_medidas; 

int main(){
	setlocale(LC_ALL,"Portuguese");
	int esc1, esc2, i;
	double quant;
	nomes_medidas nm[7] = {{"km", "kl", "kg"}, {"hm", "hl", "hg"}, {"dam", "dal", "dag"}, {"m", "l", "g"}, {"dm", "dl", "dg"}, {"cm", "cl", "cg"}, {"mm", "ml", "mg"}};

	
	printf("Comprimento: 1 / Volume: 2 / Massa: 3");
	printf("\nCom qual medida deseja trabalhar? ");
	scanf("%d", &esc1);
	
	switch(esc1){
		case 1:
			printf("km: 0 / hm: 1 / dam: 2 / m: 3 / dm: 4 / cm: 5 / mm: 6");
			printf("\nEscolha a unidade de medida que deseja trabalhar: ");
			scanf("%d", &esc2);
			printf("Qual a quantidade do material: ");
			scanf("%lf", &quant);
			for(i = 0; i < 7; i++){
				printf("O resultado da conversão em %s: %lf\n",nm[i].nome_c, comprimento(quant, esc2, i));
			}	
			break;
		case 2:
			printf("kl: 0 / hl: 1 / dal: 2 / l: 3 / dl: 4 / cl: 5 / ml: 6");
			printf("\nEscolha a unidade de medida que deseja trabalhar: ");
			scanf("%d", &esc2);
			printf("Qual a quantidade do material: ");
			scanf("%lf", &quant);
			for(i = 0; i < 7; i++){
				printf("O resultado da conversão em %s: %lf\n",nm[i].nome_v, volume(quant, esc2, i));
			}	
			break;
		case 3:
			printf("kg: 0 / hg: 1 / dag: 2 / g: 3 / dg: 4 / cg: 5 / mg: 6");
			printf("\nEscolha a unidade de medida que deseja trabalhar: ");
			scanf("%d", &esc2);
			printf("Qual a quantidade do material: ");
			scanf("%lf", &quant);
			for(i = 0; i < 7; i++){
				printf("O resultado da conversão em %s: %lf\n",nm[i].nome_m, massa(quant, esc2, i));
			}	
			break;
	}
}
