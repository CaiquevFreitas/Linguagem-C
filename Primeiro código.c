#include <stdio.h>

#define texto "Dados informados."
int main(){
    char nome[50] = "";
    int idade = 0;
    float altura = 0.0;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\n%s\n", texto);
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f", altura);
}