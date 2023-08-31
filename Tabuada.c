#include <stdio.h>

int main(){
    int num, m, result, vezmult;
    
    printf("Digite um número para descobrir a sua tabuada: ");
    scanf("%d", &num);
    printf("Quantas vezes será multiplicado? ");
    scanf("%d", &vezmult);
    printf("=====TABUADA=====\n");
    
    for(m = 1; m <= vezmult; m++){
        result = num * m;
        printf("%d x %d = %d\n", num, m, result);
    }
}