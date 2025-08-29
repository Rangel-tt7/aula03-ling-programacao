
#include <stdio.h>
#include <limits.h>

int main() {
    int i, j;
    int mat[2][2];
    int maior = INT_MIN;
    printf("Digite os valores da matriz 2x2:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("O maior valor dentro da matriz digitada foi: %d" ,maior);

    return 0;
}

































