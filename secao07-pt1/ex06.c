/* 6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/

#include <stdio.h>

int main(){
    int numeros[10], menor, maior;

    for(int i=0; i<10; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d:\n", &numeros[i]);
        if(menor > numeros[i]){
            menor = numeros[i];
        }
        else if(maior < numeros[i]){
            maior = numeros[i];
        }
    }

    printf("O menor elemento do vetor é: %d\n", menor);
    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}
