#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#define tam 100 

void minuscula(char str[tam]);

int main(){
	setlocale(LC_ALL,"Portuguese");
	char vogais[6] = "aeiou";
	char conso[21] = "bcdfghjklmnpqrstvyxz";
	char frase[tam];
	int cont, c, quant_vogais = 0, quant_conso = 0;
	
	printf("NÃO UTILIZE ACENTOS!!!\n");
	printf("Digite uma frase (max de %d caracteres): ", tam);
	scanf("%[^\n]s", frase);
	
	minuscula(frase);
	
	for (cont = 0; cont < strlen(frase); cont++){
		for(c = 0; c < strlen(vogais); c++){
			if (vogais[c] == frase[cont]){
				quant_vogais++;
			}
		}
		for(c = 0; c < strlen(conso); c++){
			if (conso[c] == frase[cont]){
				quant_conso++;
			}
		}
	}
	printf("Sua frase tem %d vogais", quant_vogais);
	printf("\nSua frase tem %d consoantes", quant_conso);
}

void minuscula(char str[tam]){
	int i;
	while(str[i] != '\0'){
		str[i] = tolower(str[i]);
		i++;
	}
}
