#include <stdio.h>

int main(){
    char aluno[50];
    float teste, prova, quali, trab, media, aulas, faltas, pres, presmin;
    
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno);
    printf("Informe o numero de aulas da materia: ");
    scanf("%f", &aulas);
    printf("Informe o numero de faltas do aluno: ");
    scanf("%f", &faltas);
    
    //Validando Presença
    while(faltas > aulas){
        printf("Numero de faltas superior ao numero de aulas. Digite Novamente: ");
        scanf("%f", &faltas);
    }
    
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
    
    //Validando notas
    while(prova > 10 || prova < 0){
        printf("Nota da prova invalida! Digite novamente: ");
        scanf("%f", &prova);
    } while(teste > 6 || teste < 0){
        printf("Nota do teste invalida! Digite novamente: ");
        scanf("%f", &teste);
    } while(trab > 3 || trab < 0){
        printf("Nota do trabalho invalida! Digite novamente: ");
        scanf("%f", &trab);
    } while(quali > 1 || quali < 0){
        printf("Nota do qualitativo invalida! Digite novamente: ");
        scanf("%f", &quali);
    }
    
    //Calculando a média
    media = (prova+teste+trab+quali)/2;
    
    //Presença do aluno
    presmin = 0.75 * aulas;
    pres = ((aulas - faltas) * 100)/ aulas;

    //Condições de aprovação
    if (media >= 7 && presmin <= aulas - faltas){
    	printf("====== A media da escola e 7 - Presença mimima de 75%% ======\n");
    	printf("\n%s sua media foi %f", aluno,media);
    	printf("\nVoce esteve presente em %f%% das aulas", pres);
    	printf("\nVoce esta APROVADO");
	} else {
	    printf("====== A media da escola e 7 - Presença mimima de 75%% ======\n");
    	printf("\n%s sua media foi %f", aluno,media);
    	printf("\nVoce esteve presente em %f%% das aulas", pres);
    	printf("\nVoce esta REPROVADO");
	}
}