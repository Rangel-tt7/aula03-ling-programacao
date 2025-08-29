//Criar um vetor que leia 4 numeros, armazene em um vetor e calcule a media
#include <stdio.h> 
int main(){
int numeros[4],i;
float media = 0;
for (i=0;i<4;i++){
        printf("Digite o %d numeros:\n",i+1);
        scanf("%d",&numeros[i]);
        media+=numeros[i];
}
media /=4;
printf("Sua media e: %.2f",media);

    return 0;
}