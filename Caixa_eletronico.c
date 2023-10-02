#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor, total, totalced = 0;
    int ced[6] = {100, 50, 20, 10, 5, 2};
    
    printf("=============================");
    printf("\nBem vindo ao Banco do Brasil\n");
    printf("=============================\n");
    printf("Notas: R$100, R$50, R$20, R$10, R$5, R$2");
    printf("\nInforme o valor que deseja sacar: R$");
    scanf("%d", &valor);
   
    total = valor;
    for(int i = 0; i < 6; i++){
        while (total >= ced[i]){
            total -= ced[i];
            totalced += 1;
        }
        if (total < ced[i] && totalced > 0){
            printf("Total de %d cédula(s) de R$%d\n", totalced, ced[i]);
            totalced = 0;
        }
        if (total == 0){
            break;
        }
    }
    printf("=============================");
    printf("\n\tCaixa Encerrado\n");
    printf("=============================\n");
}
