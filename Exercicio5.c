#include <stdio.h>


int main() {
    int i, j;
    int mat[2][3];
    int maiores = 0;
    printf("Digite os valores da matriz 2x3:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
           
        }
    }
    
        printf("\nMatriz digitada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j]>5){
            printf("Numeros maiores que 5: %d\n",mat[i][j]);
            maiores++;
        }
        }
        
    }
    printf("\nA quantidade de numreros maiores que 5 sao: %d ", maiores);
   

    return 0;
}