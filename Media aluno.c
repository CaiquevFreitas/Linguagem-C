#include <stdio.h>

int main(){
    char aluno[50];
    float teste, prova, quali, trab, media;
    
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno);
    
    // Recebendo as notas do aluno
    printf("Prova: 10, Teste: 6, Trabalho: 3, Qualitativo: 1\n");
    printf("Digite a nota da prova: ");
    scanf("%f", &prova);
    printf("Digite a nota do teste: ");
    scanf("%f", &teste);
    printf("Digite a nota do trabalho: ");
    scanf("%f", &trab);
    printf("Digite a nota do qualitativo: ");
    scanf("%f", &quali);
    
    //Calculando a média
    media = (prova+teste+trab+quali)/2;

    //Condições de aprovação
    if (media >= 7){
    	printf("A media da escola e 7");
    	printf("\n%s Sua media foi %f", aluno,media);
    	printf("\nVoce esta APROVADO");
	} else {
		printf("A media da escola e 7");
    	printf("\n%s Sua media foi %f", aluno,media);
    	printf("\nVoce esta REPROVADO");
	}
    
    
}
