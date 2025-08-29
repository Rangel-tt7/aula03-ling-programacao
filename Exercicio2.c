#include <stdio.h>
int main(){
    int numeros[5], i;
    for (i=0;i<5;i++){
        printf("Digite o %d numero:\n",i+1);
        scanf("%d",&numeros[i]); 
    }
    for (i=0;i<5;i++) {
        if (numeros[i]>10){
            printf("Numeros maiores que dez: %d\n",numeros[i]);
        }

    }


return 0;
}
