#include <stdio.h>

int main(){
    int matriz[3][3];
    int l, c, v, d1, d2, det;
    
    printf("[Calculando o Determinante da matriz 3x3]\n");
    //Recebendo os números da Matriz
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("Informe o número da linha %d - coluna %d: ", l+1,c+1);
            scanf("%d", &v);
            matriz[l][c] = v;
        }
    }
    //Calculo Determinante
    d1 = matriz[0][0]*matriz[1][1]*matriz[2][2] +matriz[0][1]*matriz[1][2]*matriz[2][0] +matriz[0][2]*matriz[1][0]*matriz[2][1];
    d2 = -matriz[2][0]*matriz[1][1]*matriz[0][2] -matriz[2][1]*matriz[1][2]*matriz[0][0] -matriz[2][2]*matriz[1][0]*matriz[0][1];
    det = d1 + d2;
    
    printf("\n\nO resultado da Determinante é %d", det);
    
}