#include <stdio.h>

int main(){
    int dado = 10;
    printf("Valor do dado antes das ações: %d", dado);
    
    dado ++;
    printf("\nDepois do incremento: %d", dado);
    
    dado --;
    printf("\nDepois do decremento: %d", dado);
    
    dado +=3;
    printf("\nDepois do incremento de 3 unidades: %d", dado);
    
    dado -=2;
    printf("\nDepois do decremento de 2 unidades: %d", dado);
    
    dado *=10;
    printf("\nDepois da multiplicação por 10: %d", dado);
    
    dado /=5;
    printf("\nDepois da divisão por 5: %d", dado);
    
    
}