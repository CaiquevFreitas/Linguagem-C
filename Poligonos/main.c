#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "poligonos.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	int esc, esc2;
	float x, y, z;
	
	printf("Triângulo: 1 / Retângulo: 2 / Círculo: 3\n");
	printf("Com qual polígono você quer trabalhar? ");
	scanf("%d", &esc);
	
		switch(esc){
		case 1://Triângulo
			printf("Perímetro: 1 / Área: 2\n");
			printf("Escolha a operação: ");
			scanf("%d", &esc2);
			if(esc2 == 1){
				printf("Informe o valor do 1° lado do triângulo: ");
				scanf("%f", &x);
				fflush(stdin);
				printf("Informe o valor do 2° lado do triângulo: ");
				scanf("%f", &y);
				fflush(stdin);
				printf("Informe o valor do 3° lado do triângulo: ");
				scanf("%f", &z);
				fflush(stdin);
				printf("O valor do perímetro do triângulo é %.2f", calc_Per_triangulo(x,y,z));
			}
			else if(esc2 == 2){
				printf("Informe o valor base do triângulo: ");
				scanf("%f", &x);
				fflush(stdin);
				printf("Informe o valor da altura do triângulo: ");
				scanf("%f", &y);
				printf("O valor da área do triângulo é %.2f", calc_Area_triangulo(x,y));
			}
			break;
		case 2://Retângulo
			printf("Perímetro: 1 / Área: 2\n");
			printf("Escolha a operação: ");
			scanf("%d", &esc2);
			if(esc2 == 1){
				printf("Informe o valor da base do retângulo: ");
				scanf("%f", &x);
				fflush(stdin);
				printf("Informe o valor da altura do retângulo: ");
				scanf("%f", &y);
				printf("O valor do perímetro do retângulo é %.2f", calc_Per_retangulo(x,y));	
			}
			else if(esc2 == 2){
				printf("Informe o valor da base do retângulo: ");
				scanf("%f", &x);
				fflush(stdin);
				printf("Informe o valor da altura do retângulo: ");
				scanf("%f", &y);
				printf("O valor da área do retângulo é %.2f", calc_Area_retangulo(x,y));
			}
			break;
		case 3://Círculo
			printf("Perímetro: 1 / Área: 2\n");
			printf("Escolha a operação: ");
			scanf("%d", &esc2);
			if(esc2 == 1){
				printf("Informe o valor do raio do círculo: ");
				scanf("%f", &x);
				printf("O valor do perímetro do círculo é %.2f", calc_Per_circulo(x));
			}
			else if(esc2 == 2){
				printf("Informe o valor do raio do círculo: ");
				scanf("%f", &x);
				printf("O valor da área do círculo é %.2f", calc_Area_circulo(x));
			}
			break;
			}	
	}
