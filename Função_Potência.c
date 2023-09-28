#include <stdio.h>
#include <locale.h>

int pot(int x, int y);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int expo, a, n;
    
    printf("Informe a base da potenciação: ");
    scanf("%d", &a);
    printf("Informe o expoente da potenciação: ");
    scanf("%d", &n);
    
    expo = pot(a,n);
    printf("O resultado da potenciação é: %d", expo);
}

int pot(int x, int y){
    int cont, multi;
    multi = x;
    for(cont = 1; cont < y; cont++){
        x = x * multi;
    }
    return x;
}