#include <stdio.h>

int main(){
    float n1, n2;
    int op = 0;
    
    //Receber os números
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    
    //Validando operação
    while (op != 1 && op != 2 && op != 3 && op != 4){
        
        //Escolhendo a operação
        printf("Escolha a operação\n");
        printf("soma=1, subtração=2, multiplicação=3, divisão=4\n");
        scanf("%d", &op);
        
        //Realizando os Calculos
        switch(op){
        case 1:
            printf("O resultado da soma é %f", n1 + n2);
            break;
        case 2:
            printf("O resultado da subtração é %f", n1 - n2);
            break;
        case 3:
            printf("O resultado da multiplicação e %f", n1 * n2);
            break;
        case 4:
            printf("O resultado da divisão é %f", n1 / n2);
            break;
        default:
            printf("Operação inválida\n");
            break;
    }
    
    }
}