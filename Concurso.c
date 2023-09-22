#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50
#define P 5

struct participantes{
    int reda;
    int prova;
    int total;
    char nome[TAM];
};
   
typedef struct participantes participantes;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //Criando e inicializando
    participantes part[P];
    int c;
    
    //Recebendo dados
    for(c = 0; c < P; c++){
        printf("Informe o nome do %d° participante: ", c+1);
        scanf("%50[^\n]s", &part[c].nome);
        fflush(stdin);
        
        printf("Informe a nota da redação: ");
        scanf("%d", &part[c].reda);
        fflush(stdin);
        
        printf("Informe a nota da prova: ");
        scanf("%d", &part[c].prova);
        fflush(stdin);
        printf("==================================\n");
        
        part[c].total = part[c].reda + part[c].prova;    
    }
    
    //Classificando os participantes
    puts("=====CLASSIFICADOS=====");
    for(c = 0; c < P; c++){
    	if(part[c].prova >= 65 && part[c].reda >= 70){
    		printf("Nome: %s /Redação: %d /Prova: %d /Total: %d\n", part[c].nome, part[c].reda, part[c].prova,part[c].total);
		}
	}
	puts("\n=====DESCLASSIFICADOS=====");
    for(c = 0; c < P; c++){
    	if(part[c].prova < 65 || part[c].reda < 70){
    		printf("Nome: %s /Redação: %d /Prova: %d /Total: %d\n", part[c].nome, part[c].reda, part[c].prova,part[c].total);
		}
	}     
} 
