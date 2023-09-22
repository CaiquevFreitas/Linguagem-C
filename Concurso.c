#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50

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
    participantes part[10];
    int c;
    
    //Recebendo dados
    for(c = 0; c < 10; c++){
        printf("Informe o nome do %d° participante: ", c+1);
        scanf("%50[^\n]s", &part[c].nome);
        fflush(stdin);
        
        printf("Informe a nota da redação: ");
        scanf("%d", &part[c].reda);
        fflush(stdin);
        
        printf("Informe a nota da prova: ");
        scanf("%d", &part[c].prova);
        fflush(stdin);
        
        part[c].total = part[c].reda + part[c].prova;
    }
}
