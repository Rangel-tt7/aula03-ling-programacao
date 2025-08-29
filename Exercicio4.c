#include <stdio.h>


int main() {
    int i, j;
    int mat[3][3];
    int soma = 0;
    printf("Digite os valores da matriz 3x3:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
           
        }
    }
    soma = mat[0][0] + mat[1][1] + mat[2][2];
        printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
   printf("A soma da diagonal principal é: %d", soma);

    return 0;
}